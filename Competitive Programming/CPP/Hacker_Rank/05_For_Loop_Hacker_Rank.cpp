#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int num,num2;
    cin>>num;
    cin>>num2;
    
    for(int i=num; i<=num2; i++){
    if(i==1){
        cout<<"one"<<endl;
    }
    if(i==2){
        cout<<"two"<<endl;
    }
    if(i==3){
        cout<<"three"<<endl;
    }
    if(i==4){
        cout<<"four"<<endl;
    }
    if(i==5){
        cout<<"five"<<endl;
    }
    if(i==6){
        cout<<"six"<<endl;
    }
    if(i==7){
        cout<<"seven"<<endl;
    }
    if(i==8){
        cout<<"eight"<<endl;
    }
    if(i==9){
        cout<<"nine"<<endl;
    }
    
    if(i>9 && (i%2==0)){
        cout<<"even"<<endl;
    }
    if(i>9 && (i%2!=0)){
        cout<<"odd"<<endl;
    }
    }
    
    return 0;
}
