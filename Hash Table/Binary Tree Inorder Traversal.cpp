/*
[LeetCode][94]Binary Tree Inorder Traversal

Given a binary tree, return the inorder traversal of its nodes' values.

For example:
Given binary tree [1,null,2,3],
   1
	\
	 2
	/
   3
return [1,3,2].

Note: Recursive solution is trivial, could you do it iteratively?

https://leetcode.com/problems/binary-tree-inorder-traversal/description/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		if(!root) return {};
		stack<TreeNode*> s;
		vector<int> v;
		s.push(root);
		bool traverse_left = true;
		while(!s.empty()){
			TreeNode *node = s.top();
			while(node->left && traverse_left){
				s.push(node->left);
				node = node->left;
			}
			traverse_left = false;
			v.push_back(node->val);
			s.pop();
			if(node->right){
				s.push(node->right);
				traverse_left = true;
			}
		}
		return v;
	}
};