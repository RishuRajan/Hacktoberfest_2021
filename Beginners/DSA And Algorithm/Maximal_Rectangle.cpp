/*************************************
 
 QUESTION 
 Given a binary matrix filled with 0's and 1's, 
 find the largest rectangle containing only 1's and return its area.

*************************************/

/**************************CODE*********************/

#include <bits/stdc++.h>
using namespace std;

vector<int> NSR(vector<int> &v)
{
    int n = v.size();
    vector<int> right(n);
    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && v[i] <= v[s.top()])
        {
            s.pop();
        }
        right[i] = (s.empty()) ? n : s.top();
        s.push(i);
    }
    return right;
}

vector<int> NSL(vector<int> &v)
{
    int n = v.size();
    vector<int> left(n);
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && v[i] <= v[s.top()])
        {
            s.pop();
        }
        left[i] = (s.empty()) ? -1 : s.top();
        s.push(i);
    }
    return left;
}

int MAH(vector<int> &v)
{
    vector<int> right = NSR(v);
    vector<int> left = NSL(v);
    int max_v = 0;
    for (int i = 0; i < v.size(); i++)
    {
        max_v = max(max_v, (right[i] - left[i] - 1) * v[i]);
    }
    return max_v;
}

int maximalRectangle(vector<vector<char>> &matrix)
{
    int n = matrix.size();
    if (n == 0)
        return 0;
    int m = matrix[0].size();
    vector<int> v(m, 0);
    int max_v = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] != '0')
            {
                v[j]++;
            }
            else
            {
                v[j] = 0;
            }
        }
        max_v = max(max_v, MAH(v));
    }
    return max_v;
}

int main(){
    vector<vector<char>> matrix = {{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
    cout << "The area of largest rectangle containing only 1's is " << maximalRectangle(matrix);
}