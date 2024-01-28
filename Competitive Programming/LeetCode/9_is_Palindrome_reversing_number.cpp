class Solution {
public:
    bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    long long originalNum = x;   
    long long revNum=0;
    while(x>0){
        int rem = x % 10;
        revNum = (revNum * 10) + rem;
        x/=10;
    }
    return originalNum == revNum;
    }
};