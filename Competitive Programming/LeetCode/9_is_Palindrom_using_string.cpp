#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
       std::string num = std::to_string(x);
        std::string revString="";
        for(int i=num.length()-1; i>=0; i--){
            revString+=num.at(i);
        }
        if(num == revString){
            return true;
        }
        return false;
    }
};
