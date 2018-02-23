/*
[LeetCode][338]Counting Bits 

Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.

Example:
For num = 5 you should return [0,1,1,2,1,2].

Follow up:

It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?
Space complexity should be O(n).
Can you do it like a boss? Do it without using any builtin function like __builtin_popcount in c++ or in any other language.

https://leetcode.com/problems/counting-bits/description/
*/

class Solution {
public:
	vector<int> countBits(int num) {
		vector<int> indexBits(num+1);
		int power2 = 1, j = 0;
		for(int i = 1; i <= num; i++){
			if(j == power2){
				power2 *= 2;
				j = 0;
			}
			indexBits[i] = indexBits[j++] + 1;
		}
		return indexBits;
	}
};

/*
Time  Complexity: O(n)
Space Complexity: O(1)
*/