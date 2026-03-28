// Created on iPad.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //创建哈希表，key为排序后的字符串，value为满足key的字符串组
        unordered_map<string,vector<string>> hash;
        for(string& s:strs){
            string key=s;
            sort(key.begin(),key.end());
            hash[key].push_back(s);
        }
        //将哈希表遍历，存入res容器
        vector<vector<string>> res;
        for(auto& it:hash){
            res.push_back(it.second());
        }
    return res;
    }
};
int main() {
    vector<string> strs= ["eat", "tea", "tan", "ate", "nat", "bat"];
    Solution sol;
    
    cout << "Hello World!";
    return 0;
}