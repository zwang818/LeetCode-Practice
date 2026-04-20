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
    TreeNode* helper(vector<int>& nums,int left,int right){
        //终止条件
        if(left>right)return nullptr;
        //本级逻辑
        int mid=left+(right-left)/2;
        TreeNode* node=new TreeNode(nums[mid]);
        //递归循环
        node->left=helper(nums,left,mid-1);
        node->right=helper(nums,mid+1,right);

        return node;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}