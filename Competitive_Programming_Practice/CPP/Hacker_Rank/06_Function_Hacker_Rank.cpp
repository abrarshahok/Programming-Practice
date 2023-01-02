#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int &n1, int &n2, int &n3, int &n4){
    if(n1>n2 && n1>n3 && n1>n4){
        return n1;
    }
    else if(n2>n3 && n2>n4){
        return n2;
    }
    else if(n3>n4){
        return n3;
    }
    else{
        return n4;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
