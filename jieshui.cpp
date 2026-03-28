// Created on iPad.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        //定义左右最高初始分别为第一个和最后一个
        int max_l=height[l];
        int max_r=height[r];
        int res=0;
        //不足三个数据，返回0
        if(n<3) return 0;
        while(l<r){
            //倘若左边高度比右边矮，面积按左算，从左开始遍历
            if(max_l<=max_r){
                l++;
                //比较当前h_l和Max
                //大就更新Max
                if(height[l]>max_l){
                    max_l=height[l];
                }
                //小就累加得res
                else{
                    res+=(max_l-height[l]);
                }
            }
            //maxr小，就从右边开始遍历
            else{
                r--;
                if(height[r]>max_r){
                    max_r=height[r];
                }
                else{
                    res+=(max_r-height[r]);
                }
            }
        }
        return res;
    }
};
int main() {
    Solution sol;
    vector<int> height={4,2,0,3,2,5};
    cout<<sol.trap(height);
    return 0;
}