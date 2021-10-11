// Problem
// Alice is obsessed with circles and needs your help to get the largest special circle given an integer N. Special circle is a circle with 
// integer radius if it is removed from a circle of radius N then circle left has area less than fourth of the area of the circle of radius 
// N.

// INPUT

// First line contains single integer t : The number of testcases
// Next t lines contain single integer N.

// OUTPUT

// For each test case print the radius of the largest possible special circle.

// CONSTRAINTS

// 1 ≤ t ≤ 105
// 1 ≤ N ≤ 1012

// Answer:

#include <stdio.h>
#include <math.h>

int main()
{
    long long int i,n,t,a;
   
    scanf("%lld",&t);
    
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        
        if(n%2==0)
        {
            a=(n/2)-1;
        }
        else
        {
            a=n/2;
        }
        printf("\n%lld",a);
    }
return 0;
}