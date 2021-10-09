
#include<bits/stdc++.h>
using namespace std;
#define N 300010
typedef long long int ll;
inline ll read(){
	ll x=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9'){
		if(c=='-')f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		x=(x<<1)+(x<<3)+c-'0';
		c=getchar();
	}
	return x*f;
}
ll odd,a[N],even,n,s[N];
bool check(ll x){
	ll mn=0;
	for(ll i=2;i<=n;++i){
		if(s[i-1]-mn>=x){
			mn=min(mn,s[i]);
		}
	}
	return s[n]-mn>=x;
}
int main(){
	n=read();
	for(ll i=1;i<=n;++i){
		a[i]=read();
		i&1?odd+=a[i]:even+=a[i];
	}
	if(!(n&1))return !printf("%lld %lld\n",max(odd,even),min(odd,even));
	for(ll i=1;i<=n;++i){
		s[i]=s[i-1]+(i&1?a[i]:-a[i]);
	}
	ll l=0,r=odd+even+1,ans=0;
	while(l<r){
		ll mid=(l+r)>>1;
		if(check(mid)){
			l=mid+1,ans=mid;
		}
		else{
			r=mid;
		}
	}
	printf("%lld %lld\n",even+ans,odd-ans);
	return 0;
}
