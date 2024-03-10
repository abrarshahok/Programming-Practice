#include <bits/stdc++.h>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int total_size = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) != val) {
                nums.at(total_size) = nums.at(i);
                total_size++;
            }
        }
        return total_size;
    }
};