/*
[LeetCode][300]Longest Increasing Subsequence 

Given an unsorted array of integers, find the length of longest increasing subsequence.

For example,
Given [10, 9, 2, 5, 3, 7, 101, 18],
The longest increasing subsequence is [2, 3, 7, 101], therefore the length is 4. Note that there may be more than one LIS combination, it is only necessary for you to return the length.

Your algorithm should run in O(n2) complexity.

Follow up: Could you improve it to O(n log n) time complexity?

https://leetcode.com/problems/longest-increasing-subsequence/description/
*/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        map<int, int> freq;
		int LIS = 0;
		for(int i = 0; i < nums.size(); i++){
			freq[nums[i]] = 1;
			int prev_val = 0;
			for(auto elem : freq){
				if(elem.first == nums[i]) break;
				prev_val = max(elem.second, prev_val);
			}
			freq[nums[i]] = prev_val + 1;
			LIS = max(freq[nums[i]], LIS);
		}
		return LIS;
    }
};

/*
Time  Complexity: O(n^2)
Space Complexity: O(n)
*/