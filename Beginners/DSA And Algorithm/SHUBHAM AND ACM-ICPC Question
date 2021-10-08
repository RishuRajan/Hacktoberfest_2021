//SOURCE CODE-

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);    
}
int main() 
{
	ll n; 
	cin>>n;
	vector<ll>vec(n);
	for(ll i=0;i<n;++i) 
	    cin>>vec[i];
	ll ans[n][n];
    ll res[n][n];
	memset(ans, 0, sizeof(ans));
	memset(res, 0, sizeof(res));
	for(ll i=0;i<n;++i)
	{
		for(ll j=i+1;j<=n-1;++j)
			res[i][j]=vec[i]+vec[j];
	}
	ll gcdmax = 1;
	for(ll i=1;i<=n-1;++i)
	{ 
		for(ll k=0;k<n;++k)
		{
			ans[i][k] = 1;
			ans[k][i] = 1;
		}
		ll gcdcurrent=res[0][i];
		for(ll j=1;j<=n-1;++j)
		{
			ll gcdcurrentmax = 0;
			ll ansx= 1, ansy = 1; 
			for(ll L=j+1;L<=n-1;++L)
			{
				if (ans[j][L]!= 1) 
				{
					ll gcdtemporary = gcd(gcdcurrent,res[j][L]);
					if (gcdtemporary > gcdcurrentmax) 
					{
						gcdcurrentmax = gcdtemporary;
						ansx = j; 
						ansy = L;
					}
				}
			} 
			for(ll k=0;k<n;++k)
			{
				ans[ansx][k] = 1;
				ans[k][ansx] = 1;
				ans[ansy][k] = 1;
				ans[k][ansy] = 1;
			}
			if(gcdcurrentmax)
				gcdcurrent = gcd(gcdcurrent,gcdcurrentmax);
		}
		memset(ans, 0, sizeof(ans));
		gcdmax=max(gcdmax,gcdcurrent);
	}
	cout<<gcdmax<<"\n";
	return 0;
}
