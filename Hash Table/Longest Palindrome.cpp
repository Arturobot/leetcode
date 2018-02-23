/*
[LeetCode][409]Longest Palindrome

Given a string which consists of lowercase or uppercase letters, find the length of the longest palindromes that can be built with those letters.

This is case sensitive, for example "Aa" is not considered a palindrome here.

Note:
Assume the length of given string will not exceed 1,010.

Example:

Input:
"abccccdd"

Output:
7

Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.

https://leetcode.com/problems/longest-palindrome/description/
*/

class Solution {
public:
	int longestPalindrome(string s) {
		unordered_map<char, int> freq;
		int len = 0, additional = 0;
		for(int i = 0; i < s.length(); i++) freq[s[i]]++;
		for(auto elem : freq){
			if(elem.second % 2 == 0) len += elem.second;
			else{
				len += elem.second - 1;
				additional = 1;
			}
		} 
		return len + additional; 
	}
};