// Created on iPad.

#include <iostream>
#include <queue>
#include <vector>
#include <utility>
using namespace std;
class Solution {
private:
    queue<pair<int,int>> q;
    int fresh=0;
    void helper(vector<vector<int>>& grid,int i,int j){
        int a=grid.size();
        int b=grid[0].size(); 
        if(i<0||j<0||i>=a||j>=b) return;
        if(grid[i][j]==1){
            grid[i][j]=2;
            q.push({i,j});
            fresh--;
        }
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int a=grid.size();
        int b=grid[0].size();
        //int queue<pair<int,int>> q;
        int time=0;
        for(int i=0;i<a;++i){
            for(int j=0;j<b;++j){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        if(fresh==0) return 0;
        while(!q.empty()&&fresh>0){
            int size=q.size();
            for(int i=0;i<size;++i){
                pair<int,int>cur=q.front();
                q.pop();
                int x=cur.first;
                int y=cur.second;
                helper(grid,x-1,y);
                helper(grid,x,y-1);
                helper(grid,x+1,y);
                helper(grid,x,y+1);
            }
            time++;
        }
        return (fresh==0)?time:-1;
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}