/*********************************************
 
QUESTION

You are given an array of n pairs pairs where pairs[i] = [lefti, righti] and lefti < righti.

A pair p2 = [c, d] follows a pair p1 = [a, b] if b < c. A chain of pairs can be formed in this fashion.

Return the length longest chain which can be formed.

You do not need to use up all the given intervals. You can select pairs in any order.

**********************************************/

/*************************CODE***************************/



#include <bits/stdc++.h>
using namespace std;

bool static comp(vector<int> a, vector<int> b)
{
    return a[1] < b[1];
}

int solve(vector<vector<int>> pairs, int n)
{
    int curr = pairs[0][1];
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (curr < pairs[i][0])
        {
            curr = pairs[i][1];
            cnt++;
        }
    }

    return cnt;
}

int findLongestChain(vector<vector<int>> &pairs)
{
    int n = pairs.size();
    sort(pairs.begin(), pairs.end(), comp);
    return solve(pairs, n);
}

int main(){
    vector<vector<int>> pairs = {{1,2},{2,3},{3,4}};
    cout << "The length of the longest chain is " << findLongestChain(pairs);
}