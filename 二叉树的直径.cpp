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
    int res;
    int maxDepth(TreeNode* root){
       if(!root)return 0;
       int left=maxDepth(root->left);
       int right=maxDepth(root->right);
       res=max(res,left+right+1);
       return max(left,right)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        res=1;
        maxDepth(root);
        return res-1;
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}