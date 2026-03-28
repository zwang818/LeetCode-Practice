// Created on iPad.

#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        unordered_set<char> window;
        int n=s.size();
        int max_len=0;
        while(r<n)
        {
            char c=s[r];
            //在窗口中找当前字符，找到
            while(window.count(c)){
                //按序删除s[l],直到窗口没有c
                window.erase(s[l]);
                l++;
            }
            //插入当前字符
            window.insert(s[r]);

            //更新最长距离
            max_len=max(max_len,r-l+1);
            //右指针向右移
            r++;
        }
    return max_len;
    }
};

int main() {
    string s="abcabcabc";
    Solution sol;
    cout<<sol.lengthOfLongestSubstring(s);
    return 0;
}