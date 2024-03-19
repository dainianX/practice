#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
     static vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return{i, j};
                }
            }
        }
        return {};
    }
};

int main() {
    vector<int> nums{2, 7, 11, 15};
    int target = 9;
    vector<int> indices;
    indices = Solution::twoSum(nums, target);
    cout << indices[0] << ' ' << indices[1];
    return 0;
}
