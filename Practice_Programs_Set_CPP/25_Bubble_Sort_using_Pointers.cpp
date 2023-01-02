#include<iostream>
using namespace std;

int main(){
    system("clear");

    int arr[5] = {4,3,5,1,2};
    int* ptr;
    ptr = arr;

    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(*(ptr+i) > *(ptr+j)){
                int swap = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = swap;
            }
        }
    }

    for(int i=0; i<5; i++){
        cout<<*(ptr+i)<<endl;
    }
}