#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[30],key;
	int i,count=0;
	cout<<"enter a string"<<endl;
	gets(a);
	cout<<"enter search key:"<<endl;
	cin>>key;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==key)
		{
			count++;
		}
	
	}
	cout<<"accurance of search alaphabate"<<" "<<count<<endl;
}
