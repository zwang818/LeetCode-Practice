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
    unordered_map<int,int> prefix;
    int helper(TreeNode* root,int currsum,int targetSum){
        //退出条件
        if(!root) return 0;

        //本级逻辑
        int res=0;
        currsum+=root->val;
        if(prefix.count(currsum-targetSum)){
            res+=prefix[currsum-targetSum];
        }
        prefix[currsum]++;
        res+=helper(root->left,currsum,targetSum);
        res+=helper(root->right,currsum,targetSum);

        prefix[currsum]--;
        return res;
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        prefix[0]=1;
        return helper(root,0,targetSum); 
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}