/*
[LeetCode][53]Maximum Subarray 

Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
the contiguous subarray [4,-1,2,1] has the largest sum = 6.

https://leetcode.com/problems/maximum-subarray/description/
*/

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		if(nums.empty()) return 0;
		
		int maxSum = nums[0], curr = nums[0], n = nums.size();
		for(int i = 1; i < n; i++){
			int tmp = curr + nums[i];
			curr = tmp > nums[i] ? tmp : nums[i];
			maxSum = max(curr, maxSum);
		}
		return maxSum;
	}
};

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/