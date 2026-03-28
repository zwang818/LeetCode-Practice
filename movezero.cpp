// Created on iPad.

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    void movezero(vector<int>& nums){
        int left=0;
        for(int right=0;right<nums.size();++right){
            if(nums[right]!=0){
                swap(nums[left],nums[right]);
                left++;
            }
        }
    }
};


int main() {
    vector<int> arr={0,1,2,0,9,13,0};
    Solution sol;
    sol.movezero(arr);
    for(int i=0;i<7;++i)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}