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
    void helper(vector<int> &arr,TreeNode* root){
        if(!root) return nullptr;
        helper(arr,root->left);
        arr.push_back(root->val);
        helper(arr,root->right);
    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int> arr;
        helper(arr,root);
        for(int i=0;i<arr.size()-1;++i){
            if(arr[i]>=arr[i+1]){
                return false;
            }
        }
        return true;
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}