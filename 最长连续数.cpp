// Created on iPad.

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash_set;
        int n=nums.size();
        if(n<1)return 0;
        for(int i=0;i<n;++i){
            hash_set.insert(nums[i]);
        }
        int res=1;
        for(int num:hash_set){
            if(hash_set.count(num-1)) continue;
            int current=num;
            int ans=1;
            int a=1;
            while(hash_set.count(current+a)){
                ans++;
                a++;
            }
            res=max(res,ans);
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums={100,4,200,1,3,2};
    cout<<sol.longestConsecutive(nums)<<endl;
    return 0;
}