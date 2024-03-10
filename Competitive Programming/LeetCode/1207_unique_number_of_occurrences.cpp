#include<bits/stdc++.h>
class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        sort(arr.begin(), arr.end());
        std::vector<int> vec;
        for (int i = 0; i < arr.size(); i++) {

            int count = 0;

            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    i++;
                }
            }

            vec.push_back(count);
        }

        sort(vec.begin(), vec.end());

        for (int i = 1; i < vec.size(); i++) {
            if (vec.at(i) == vec.at(i - 1)) {
                return false;
            }
        }

        return true;
    }
};