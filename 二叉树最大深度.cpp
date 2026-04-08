// Created on iPad.

#include <iostream>
#include <queue>
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
 //dfs
// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//       //终止条件
//       if(!root)return 0;
//       //递归
//       int left=maxDepth(root->left);
//       int right=maxDepth(root->right);
//       //本级
//       return max(left,right)+1;   
//     }
// };
//bfs
class Solution{
public:
    int maxDepth(TreeNode* root){
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int depth=0;

        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;++i){
                TreeNode* node=q.front();
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            depth++;
        }
        return depth;
    }
};




int main() {
    cout << "Hello World!";
    return 0;
}