//QUESTION-
Given a string and number of rows ‘n’. Print the string formed by concatenating n rows when the input string is written in row-wise Zig-Zag fashion.

Example 1:

Input: 
str = "ABCDEFGH"
n = 2
Output: "ACEGBDFH"
Explanation: 
Let us write input string in 
Zig-Zag fashion in 2 rows.
A   C   E   G  
  B   D   F   H
Now concatenate the two rows and ignore 
spaces in every row. We get "ACEGBDFH"

//CODE-

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    string convert(string s, int n) {
        //code
        if(n == 1){
            return s;
        }
        // sine wave traversal, just like spiral traversal
        string res= "";
        string temp = "";
        int count = 0;
        vector<string>vect(n);
        for(int i=0; i<(int)s.size(); i++){
            vect[count] += s[i];
            if(count == n-1){
                temp = "up";
            }
            if(count == 0){
                temp="down";
            }
            if(temp == "up"){
                count -= 1;
            }
            else{
                count += 1;
            }
        }
        for(int i=0; i<n; i++){
            res+= vect[i];
        }
        return res;
    }
};

// { Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.convert(str, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
