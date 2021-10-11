/*
  Himanshu is a very strange person, so every day he has a new stunning number. But since it's only one, in case he needs multiple numbers, Himanshu came up with the definition of "Suffix stunning number".
A number is called a Suffix stunning number if it ends with Himanshu's stunning number.
So for example, if Himanshu's stunning number is 
25
, then Suffix stunning number would be 
625
,
11225
, and 
25
, whereas 
5
 and 
2255
, are not.
Write a program for Himanshu that will report how many Suffix stunning numbers are available not exceeding 
M
*/

code

#include <bits/stdc++.h>
using namespace std;
int digitsOf(int num) 
{ 
    return to_string(num).size(); 
} 
  
// Function to count all possible 
// numbers having Suffix as N 
int count(int a, int tn) 
{ 
    // Difference of the A.P 
    int diff = pow(10, digitsOf(a)); 
  
    // Count of the number of terms 
    return ((tn - a) / diff) + 1; 
} 
int main()
{
  //write your code here
int a,b;
  cin>>a>>b;
  cout<<count(a,b);
  return 0;
}
