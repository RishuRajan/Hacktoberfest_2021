// sliding window + Sieve
// By Prakhar Sharma and Sushant Singh
// Ronaldo always liked to score high , but sometimes it hard to achieve that level inspite of all the effort.
// His coach always wants him ready mentally to play in next match . And he has a solution for that he knows that he has to cheer Ronaldo a little bit . So he came to him and said “ don’t look at your one failure like this and look at your K  out of N matches together . Pick maximum score from each group of K matches and look at the sum of all such matches from different groups. 
// But Ronaldo being always strange and weird liked the prime numbers . 

// So Ronaldo will only cheer if sum of all max scores from each k group will be prime .

// Your job is to provide coach with a solution which will tell coach that Ronaldo will be happy in next game or not .


// INPUT

// Number of test cases. (1≤ T ≤104)
// Each test case will contain number of matches N in first line. (1≤ N ≤103) 
// Next line will contain a list of goals in n matches separated by space.
// Next line will contain K.(1≤ K ≤ 100)

// OUPUT

// YES  or  NO.  (in capital letters)

// Sample case

// 	INPUT
// 		1
// 		8
// 		1 3 2 4 5 3 6 7
// 		3

// 	OUTPUT 

// 		No




	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define pb push_back
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	#define len 10000000
	using namespace std;
	 bool prime[len+1];
	void sieve(){

    mem(prime, true);
 
    for (int p = 2; p * p <= len; p++)
    {
       
        if (prime[p] == true)
        {
          
            for (int i = p * p; i <= len; i += p)
                prime[i] = false;
        }
    }
	}


int main()
{
		sieve();
		int t;
		cin>>t;
		while(t--){
				int n;
				cin>>n;
				vll v;
				for(int i=0;i<n;i++){
					ll a;
					cin>>a;
					v.pb(a);
				}

		//sliding window

				ll k,sum=0;
				cin>>k;
				list<int> l1;
				ll i=0,j=0;
				while(j<n){
					l1.pb(v[j]);
					if(j-i+1<k){
						j++;
					}
					else{
						sum+=(*max_element(l1.begin(),l1.end()));
						l1.pop_front();
						j++;
						i++;

					}
				}

		//prime check 
		   if(prime[sum])
		   	cout<<"YES";
		   else{
		   	cout<<"NO";
		   }
		}
return 0;
}
