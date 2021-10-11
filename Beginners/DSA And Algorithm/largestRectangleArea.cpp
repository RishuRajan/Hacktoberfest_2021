#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define ll long long

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int > nsr(n, n), nsl(n, -1);
        stack<int > s;
        for (int i = 0; i < n; ++i) {
            bool flag = true;
            while (!s.empty() && flag) {
                if (heights[i] > heights[s.top()]) {
                    nsl[i] = s.top();
                    flag = false;
                }
                else s.pop();
            }
            s.push(i);
        }

        while (!s.empty()) {
            s.pop();
        }

        for (int i = n - 1; i >= 0; --i) {
            bool flag = true;
            while (!s.empty() && flag) {
                if (heights[i] > heights[s.top()]) {
                    nsr[i] = s.top();
                    flag = false;
                }
                else s.pop();
            }
            s.push(i);
        }

        int mx = INT_MIN;
        vector<int > res(n);
        for (int i = 0; i < n; ++i) {
            res[i] = nsr[i] - nsl[i] - 1;
            res[i] = res[i] * heights[i];
            mx = max(mx, res[i]);
        }
        return mx;
    }
};

int main() {
    fast_io;
    int n; cin >> n;
    vector<int > heights(n);
    for (int i = 0; i < n; ++i)
        cin >> heights[i];
    Solution ob;
    cout << ob.largestRectangleArea(heights) << endl;
    return 0;
}
