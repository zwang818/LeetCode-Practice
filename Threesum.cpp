// Created on iPad.

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //从小到大排序(sort函数默认升序)
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        if(nums.size<3) return res;
        //固定一个数
        for(int i=0;i<nums.size()-2;++i){
            //外层去重：第一个数字
            if(i>=0&&nums[i]==nums[i-1]) continue;
            //另外两数之和为res-数1
            int target=-nums[i];
            int j=i+1;
            int k=nums.size()-1;

            while(j<k){
                //找到一个解
            if(nums[j]+nums[k]==target){
                res.push_back({nums[i],nums[j],nums[k]});
                //内层去重：遇到一样的就跳过
                while(j<k&&nums[j]==nums[j+1]) j++;
                while(j<k&&nums[k]==nums[k-1]) k--;
                j++;
                k--;
            }
            //当和小于目标，左指针向右移
            else if(nums[j]+nums[k]<target){
                j++;
            }
            //大于时，右指针向左
            else if(nums[j]+nums[k]>target){
                k--;
            }
            }
        }
        return res;
    }
};
int main() {
    c
    return 0;
}