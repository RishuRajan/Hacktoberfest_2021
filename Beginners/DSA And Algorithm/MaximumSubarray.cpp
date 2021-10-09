//Leetcode Problem - Maximum Subarray Sum using Kadane's Algorithm - O(n)
/*Problem- Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.*/

/*Example 1 - Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.*/

/*Example 2 - Input: nums = [5,4,-1,7,8]
Output: 23*/

//Solution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0;
        int ms=0;
        int j=0,flag=0;
        while(nums[j]<0)
        {
            flag+=1;
            j++;
            if(j==nums.size())
                break;
        }
        if(flag==nums.size())
        {
            sort(nums.begin(),nums.end());
            return nums.at(nums.size()-1);
        }
        else{
        for(int i=0;i<nums.size();i++)
        {
            cs=cs+nums[i];
            if(cs<0)
                cs=0;
            ms=max(ms,cs);
        }  
            }
        return ms;
    }
};
