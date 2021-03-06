/*
[LeetCode][136]Single Number

Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

https://leetcode.com/problems/single-number/description/
*/

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int num = 0;
		for(int i = 0; i < nums.size(); i++){
			num ^= nums[i];
		}
		return num;
	}
};

/*
Time  Complexity: O(n)
Space Complexity: O(1)
*/