/*
[LeetCode][1]Two Sum 

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9, 
return [0, 1].

https://leetcode.com/problems/two-sum/description/
*/

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> indexes;
		unordered_map<int, int> complements;

		for(int i = 0; i < nums.size(); i++){
			int complem = target - nums[i];
			if(complements.find(complem) != complements.end()){
				indexes.push_back(i);
				indexes.push_back(complements[complem]);
				break;
			}
			complements[nums[i]] = i;
		}
		return indexes;
	}
};

/*
Time  Complexity:
Space Complexity:
*/