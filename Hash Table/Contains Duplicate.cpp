/*
[LeetCode][217]Contains Duplicate

Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

https://leetcode.com/problems/single-number/description/
*/

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		unordered_set<int> mySet(nums.begin(), nums.end());
		return mySet.size() != nums.size();
	}
};

/*
Time  Complexity: O(n)
Space Complexity: O(n)
*/