// Created on iPad.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
        //记录前缀和出现的次数
        unordered_map<int,int> hash;
        hash[0]=1;
        int sum=0;
        for(int num:nums){
            //当前前缀和
            sum+=num;
            //截止到当前数的，和为k的序列的前缀和
            int target=sum-k;
            if(hash.count(target)){
                count+=hash[target];
            }
            hash[sum]++;
        }
        return count;
    }
};