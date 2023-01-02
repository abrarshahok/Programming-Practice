#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function   
    int sum,sub;
    sum = *a + *b;
    sub = *a - *b;
    printf("%d\n",sum);
    if(sub<0){
        printf("%d",-(sub));
    }else{
        printf("%d",sub);
    } 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}