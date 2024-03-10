#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int max = 0;
        int min = prices.at(0);
        for (int i = 1; i < prices.size(); i++) {
            if (prices.at(i) - min > max) {
                max = prices.at(i) - min;
            }
            else if (prices.at(i) < min) {
                min = prices.at(i);
            }
        }
        return max;
    }
};