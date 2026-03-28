// Created on iPad.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<int> res;
        if(n<m) return res;
        //创建p的哈希表，用于对照
        unordered_map<char,int> need;
        for(char c:p){
            need[c]++;
        }
        //几种不同的字符
        int count1=need.size();
        //创建窗口
        unordered_map<char,int> window;
        //两个表中key对应值是否相等
        int count=0;
        int left=0;
        int right=0;
        while(right<n){
            char c=s[right];
            window[c]++;
            //频率相同，count+1
            if(need.count(c)&&window[c]==need[c]){
                count++;
            }
            right++;
            //窗口长度大于m,右移left
            if(right-left>m){
                char c1=s[left];
                //判断c1在移动前是否频率相同
                if(need.count(c1)&&window[c1]==need[c1]){
                    count--;
                }
                window[c1]--;
                left++;
            }

            //窗口长度相同，且此时count等于need长度，添加res
            if(right-left==m&&count==count1){
                res.push_back(left);
            }
        }
        return res;
    }
};
int main() {
    string s="cbaebabacd";
    string p="abc";
    Solution sol;
    vector<int> res=sol.findAnagrams(s,p);
    cout<<"[";
    int first=1;
    for(int a:res){
        if(!first){
            cout<<",";
        }
        cout<<a;
        first=0;
    }
    cout<<"]";
    return 0;
}