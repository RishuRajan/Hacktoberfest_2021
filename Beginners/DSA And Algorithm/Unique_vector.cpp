//PROBLEM STATEMENT-
// Given an array nums[] of N positive integers. Find the minimum number of operations required to modify the array such that array elements are in strictly increasing order (A[i] < A[i+1]).
// Changing a number to greater or lesser than original number is counted as one operation.

// Example 1:-
// Input: nums[] = [1, 2, 3, 6, 5, 4]
// Output: 2
// Explanation: By decreasing 6 by 2 and
// increasing 4 by 2, arr will be like
// [1, 2, 3, 4, 5, 6] which is stricly 
// increasing.

// Example 2:-
// Input: nums[] = [1, 2, 3, 4]
// Output: 0
// Explanation: Arrays is already strictly
// increasing.

//SOURCE CODE-
class Solution{
	public:

		int min_operations(vector<int>nums){
			int n = nums.size();
			vector<int>dp(n,1);
			for(int i = 1; i < n; i++){
				int temp = 0;
				for(int j = 0; j < i; j++){
					// If nums[i] is greater than nums[j] then it can be added to the set of LIS
					if(nums[i] > nums[j])
					    if(nums[i] - nums[j] > i - j - 1)
						temp = max(temp, dp[j]);
				}
				// length of maximum increasing subsequnce whose last element is nums[i]
				dp[i] = max(dp[i], 1 + temp);
			}
			// total opeartion needs to  apply
			return n - *max_element(dp.begin(), dp.end());
		}
};
