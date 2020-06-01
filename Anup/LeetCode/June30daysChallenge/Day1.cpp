/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// Invert a binary tree.
// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3347/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        f(root);
        return root;
    }
    
    void f(TreeNode* root) {
        if(root==NULL) return;
        TreeNode* temp = root -> left;
        root -> left = root -> right;
        root -> right = temp;
        f(root -> left);
        f(root -> right);
    }
};