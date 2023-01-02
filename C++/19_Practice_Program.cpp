#include<iostream>
using namespace std;
int main(){
    system("clear");
    double array[4][3]={
        {3964.23,4135.87,4397.98},
        {867.75,923.59,1037.01},
        {12.77,378.32,798.22},
        {2983.53,3983.73,9494.98}
    };
    cout<<"\n\t\t\tMonth\n"<<endl;
    for(int i=0;i<3;i++){
        cout<<"\t";
        cout<<"\t   "<<i+1;
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<"District "<<i+1<<"\t";
        for(int j=0;j<3;j++){
            cout<<array[i][j]<<"\t\t";
        }
        cout<<endl;
    }
    cout<<endl;
}