#include <bits/stdc++.h>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int end = nums.size();
        for(int i=0; i<end-1; i++){
            for(int j=i+1; j<end; j++){
                if(nums.at(i)+nums.at(j)==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};