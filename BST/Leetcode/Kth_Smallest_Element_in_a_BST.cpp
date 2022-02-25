// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

/*
Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.
*/

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
class Solution {
public:
    
    int ans = 0;
    int counter = 0;
    
    void helper(TreeNode* &root , int k){
        if(root==NULL){
            return;
        }
        helper(root->left , k);
        counter++;
        if(counter == k){
            ans = root->val;
        }
        helper(root->right,k);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        helper(root,k);
        return ans;
    }
};
