// Created on iPad.

#include <iostream>
using namespace std;
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
private:
    void helper(vector<int>& arr,TreeNode* root){
        if(!root) return;
        helper(arr,root->left);
        arr.push_back(root->val);
        helper(arr,root->right);
        return;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        helper(arr,root);
        return arr[k-1];
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}