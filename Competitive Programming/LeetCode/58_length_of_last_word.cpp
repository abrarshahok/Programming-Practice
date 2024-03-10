#include <iostream>
class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int count = 0;
        bool isCounting = false;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                isCounting = true;
                count++;
            }
            else if (s[i] == ' ' && isCounting) {
                break;
            }
        }
        return count;
    }
};