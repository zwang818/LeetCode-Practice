// Created on iPad.

#include <iostream>
#include <unordered_map>
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
    unordered_map<int,int> hashMap;
    TreeNode* helper(vector<int>& preorder,int preL,int preR,vector<int>& inorder,int inL,int inR){
        //退出条件
        if(preL>preR) return nullptr;
        //本级逻辑
        int rootval=preorder[preL];
        int rootindex=hashMap[rootval];
        TreeNode* root=new TreeNode(rootval);
        int leftsize=rootindex-inL;
        root->left=helper(preorder,preL+1,preL+leftsize,inorder,inL,rootindex-1);
        root->right=helper(preorder,preL+leftsize+1,preR,inorder,rootindex+1,inR);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();++i){
            hashMap[inorder[i]]=i;
        }
        return helper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1); 
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}