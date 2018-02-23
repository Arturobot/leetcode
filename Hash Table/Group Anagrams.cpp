/*
[LeetCode][49]Group Anagrams

Given an array of strings, group anagrams together.

For example, given: ["eat", "tea", "tan", "ate", "nat", "bat"], 
Return:

[
	["ate", "eat","tea"],
	["nat","tan"],
	["bat"]
]
Note: All inputs will be in lower-case.

https://leetcode.com/problems/group-anagrams/description/
*/

class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string> &strs) {
		unordered_map<string, vector<string>> groups;
		
		for(int i = 0; i < strs.size(); i++){
			string str = strs[i];
			sort(str.begin(), str.end());
			groups[str].push_back(strs[i]);
		}
		
		vector<vector<string>> groupsOfAnagrams;
		for(auto group : groups){
			groupsOfAnagrams.push_back(group.second);
		}
		return groupsOfAnagrams;
	}
};

/*
Time  complexity: O(knlog(n))
Space complexity: O(n*k)
*/