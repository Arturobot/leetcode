/*
[LeetCode][387]First Unique Character in a String

Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.

https://leetcode.com/problems/first-unique-character-in-a-string/description/
*/

class Solution {
public:

unordered_map<char,int> mapString(string s){
	unordered_map<char,int> myMap;
	for(char c : s){
		myMap[c]++;
	}
	return myMap;
}

int firstUniqChar(string s){
	unordered_map<char,int> myMap = mapString(s);
	
	int index = 0;
	for(char c : s){
		if(myMap[c] == 1){
			return index;
		}
		index++;
	}
	return -1;
}
};