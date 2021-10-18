#include<iostream>
using namespace std;

void TOH(int n,int a,int b,int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        cout<<"("<<a<<","<<c<<")";
        TOH(n-1,b,a,c);
    }

}

int main()
{
    TOH(3,1,2,3);
}