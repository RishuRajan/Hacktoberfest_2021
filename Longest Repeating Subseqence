#include<bits/stdc++.h>
using namespace std;

int  lrs(string str) {
    int n = str.size();
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=n;j++) {
            if(i == 0 or j == 0) dp[i][j] = 0;
            else if(str[i-1] == str[j-1] and i != j) dp[i][j] = 1 + dp[i-1][j-1];   
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][n];
}

int main() {
    string str; cin>>str;
    cout<<lrs(str);
    return 0;
}
