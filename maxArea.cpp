// Created on iPad.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height){
        int l=0;
        int r=height.size()-1;
        int max=0;
        
        while(l<r)
        {
            int current=min(height[l],height[r])*(r-l);
            if(current>max){
                max=current;
            }
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return max;
    }
};

int main() {
    Solution sol;
    vector<int> height={1,9,6,2,3,4,8,8,3};
    int max=sol.maxArea(height);

    cout << max;

    return 0;
}