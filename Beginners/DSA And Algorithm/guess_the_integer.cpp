#include<iostream>
using namespace std;
typedef long long int ll;
int min(int a,int b){
    if (a>b)
    {
        return b;
    }
    return a;
}

int max(int a,int b){
    if (a>b)
    {
        return a;
    }
    return b;
}
int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        ll minimum=10e10,maximum=-10e10,i;
        while(n--)
        {
            char ch;
            cin>>ch>>i;
            if(ch=='L')
               minimum=min(minimum,i);
            else
               maximum=max(maximum,i);
        }
        (minimum<maximum || (minimum==maximum+1) || minimum==10e10 || maximum==-10e10)?cout<<-1<<"\n":cout<<(minimum-maximum-1)<<"\n";
    }
    return 0;
}
