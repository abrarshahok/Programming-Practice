#include <iostream>
class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int n = haystack.length();
        int m = needle.length();

        if (n < m) {
            return -1;
        }

        for (int i = 0; i < n; i++) {
            int count = i;
            for (int j = 0; j < m; j++) {
                if (haystack[count] == needle[j]) {
                    count++;
                }
                else {
                    break;
                }
                if (j == m - 1) {
                    return i;
                }
            }

        }
        return -1;
    }
};