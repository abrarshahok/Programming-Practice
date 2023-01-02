#include <iostream>
using namespace std;
int main(){
    system("clear");
    int arr[]={1,1,2,2,3,4};

    for(int i=0; i<6; i++){
        
        if(arr[i]==arr[i+1]){
            continue;
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
}
