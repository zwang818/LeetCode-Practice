// Created on iPad.

#include <iostream>
using namespace std;
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        //邻接表，定义一门课的后面有哪些课
        vector<vector<int>> adj(numCourses);
        //入度，不同课程的前置课程
        vector<int> indegree(numCourses,0);
        //入度为0的课程可以入列，意思是可以修
        queue<int> q;
        //通过先修表，填充邻接表
        for(auto pre:prerequisites){
            int a=pre[0];
            int b=pre[1];
            indegree[a]++;
            adj[b].push_back(a);
        }
        //入度为0入对
        for(int i=0;i<numCourses;++i){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int count=0;
        //循环体
        while(!q.empty()){
            int x=q.front();
            q.pop();
            count++;
            //所有以此课为先修的课程，入度减1
            for(int y:adj[x]){
                indegree[y]--;
                if(indegree[y]==0){
                    q.push(y);
                }
            }
        }
        //修过的课程和课程数进行比较
        return numCourses==count;
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}