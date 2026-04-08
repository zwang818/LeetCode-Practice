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
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        queue<TreeNode*> q;

        q.push(root->left);
        q.push(root->right);
        while(!q.empty()){
            TreeNode* u=q.front();
            q.pop();
            TreeNode* v=q.front();
            q.pop();

            //u,v都是null
            if(!u&&!v) continue;
            //其中一个为空，不对称
            if(!u||!v) return false;
            //值不相等，不对称
            if(u->val!=v->val) return false;
            //分别插入u，v的子树
            q.push(u->left);
            q.push(v->right);
            q.push(u->right);
            q.push(v->left);
        }
        return true;        
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}