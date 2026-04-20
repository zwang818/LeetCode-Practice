// Created on iPad.

#include <iostream>
using namespace std;
class Solution {
private:
    void helper(vector<vector<char>>& grid,int i,int j){
        //退出条件
        int a=grid.size();
        int b=grid[0].size();
        if(i<0||i>=a||j<0||j>=b||grid[i][j]=='0')return;
        grid[i][j]='0';

        helper(grid,i-1,j);
        helper(grid,i,j-1);
        helper(grid,i+1,j);
        helper(grid,i,j+1);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int a=grid.size();
        int b=grid[0].size();
        int res=0;
        for(int i=0;i<a;++i){
            for(int j=0;j<b;++j){
                if(grid[i][j]== '1'){
                    res++;
                    helper(grid,i,j);
                }
            }
        }
        return res;
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}