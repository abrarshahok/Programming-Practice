#include <bits/stdc++.h>

class Solution {
public:
    static bool isValid(std::string s) {
        std::stack<int> st;

        if (s.length() <= 1) {
            return false;
        }

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if (st.empty()) return false;
                if ((st.top() == '(' && s[i] == ')')
                    || (st.top() == '{' && s[i] == '}')
                    || (st.top() == '[' && s[i] == ']')) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
