/*
[LeetCode][198]House Robber 

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.

https://leetcode.com/problems/house-robber/description/
*/

class Solution {
public:
	int rob(vector<int>& nums) {
		int n = nums.size(), prev = 0, curr = 0;
		
		for(int i = 0; i < n; i++){
			int temp = max(prev + nums[i], curr);
			prev = curr;
			curr = temp;
		}
		return curr;
	}
};

/*
Time  Complexity: O(n)
Space Complexity: O(1)
*/