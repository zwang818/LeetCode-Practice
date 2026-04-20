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
    int maxSum=INT_MIN;
public:
    int maxgain(TreeNode* root){
        //终止条件
        if(!root) return 0;
        //递归获取左右子树的最大贡献值
        int leftgain=max(maxgain(root->left),0);
        int rightgain=max(maxgain(root->right),0);
        //本级逻辑
        //假如当前节点作为挂钩拐点
        int rootval=root->val;
        int cur=rootval+leftgain+rightgain;
        maxSum=max(maxSum,cur);

        return max(rootval+leftgain,rootval+rightgain);
    }
    int maxPathSum(TreeNode* root) {
        maxgain(root);
        return maxSum;
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}