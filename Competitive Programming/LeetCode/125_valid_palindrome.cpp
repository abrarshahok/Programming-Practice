#include <iostream>
#include <algorithm>
class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string str = "";
        std::string revStr = "";

        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        for (int i = 0; i < s.length(); i++) {
            if (isalpha(s[i]) || isdigit(s[i])) {
                str += s[i];
            }
        }

        for (int i = str.length() - 1; i >= 0; i--) {
            revStr += str[i];
        }

        return str == revStr;
    }
};