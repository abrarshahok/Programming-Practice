#include <bits/stdc++.h>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int unique = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums.at(i) != nums.at(i - 1)) {
                nums.at(unique) = nums.at(i);
                unique++;
            }
        }
        return unique;
    }
};