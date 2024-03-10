#include<vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int pos = 0;
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == target) {
                return i;
            }

            if (nums[i] > target) {
                break;
            }
            else {
                pos = i + 1;
            }
        }
        return pos;
    }
};