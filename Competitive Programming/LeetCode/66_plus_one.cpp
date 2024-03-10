#include <vector>
class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size() - 1;
        for (int i = n; i >= 0; i--) {
            digits.at(i)++;
            if (digits.at(i) < 10) {
                return digits;
            }
            else {
                digits.at(i) = 0;
            }
        }

        // it will insert one to the begining of number if zero else will be incremented by one  
        digits.insert(digits.begin(), 1);
        return digits;
    }
};