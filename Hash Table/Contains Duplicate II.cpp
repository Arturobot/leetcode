/*
[LeetCode][219]Contains Duplicate

Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k.

https://leetcode.com/problems/contains-duplicate-ii/description/
*/

class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_map<int, pair<int, int>> map;
		
		for(int i = 0; i < nums.size(); i++){
			map[nums[i]].first++;
			if(map[nums[i]].first > 1){
				if(abs(map[nums[i]].second - i) <= k) return true;
			}
			map[nums[i]].second = i;
		}
		return false;
	}
};