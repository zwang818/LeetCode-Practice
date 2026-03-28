#include <iostream>      // 用于输入输出
#include <vector>        // 用于 vector
#include <unordered_map> // 用于 unordered_map

using namespace std;     // 方便使用 std 命名空间中的名称

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            auto it = hashMap.find(complement);
            if (it != hashMap.end()) {
                //first为key，second为value
                return {it->second, i};
            }
            hashMap[nums[i]] = i;
        }
        return {}; // 根据题意不会执行到这里
    }
};

int main() {
    // 创建 Solution 对象
    Solution sol;

    // 测试用例 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = sol.twoSum(nums1, target1);
    cout << "[" << result1[0] << ", " << result1[1] << "]" << endl;

    // 测试用例 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = sol.twoSum(nums2, target2);
    cout << "[" << result2[0] << ", " << result2[1] << "]" << endl;

    // 测试用例 3
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = sol.twoSum(nums3, target3);
    cout << "[" << result3[0] << ", " << result3[1] << "]" << endl;

    return 0;
}