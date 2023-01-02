#include<iostream>
using namespace std;

struct Bridge{
    double bridge_1,bridge_2,bridge_3;
};

int main(){
    system("clear");

    struct Bridge count_area[3];
    double sum[3],average[3],largest[3];

    for(int i=0;i<3;i++){
        cout<<"\nEnter Month "<<i+1<<" traffic Across the Golden Gate Bridge   : ";
        cin>>count_area[i].bridge_1;
        cout<<"Enter Month "<<i+1<<" traffic Across the Bay Bridge           : ";
        cin>>count_area[i].bridge_2;
        cout<<"Enter Month "<<i+1<<" traffic Across the San Matero Bridge    : ";
        cin>>count_area[i].bridge_3;
    }
    
    cout<<"\nAverage Monthly Traffic Across the Golden Gate Bridge is : ";
    for(int i=0;i<3;i++){
        sum[0]+=count_area[i].bridge_1;
        average[0]=sum[0]/3;
    }
    cout<<average[0];


    cout<<"\nAverage Monthly Traffic Across the Bay Bridge is         : ";
    for(int i=0;i<3;i++){
        sum[1]+=count_area[i].bridge_2;
        average[1]=sum[1]/3;
    }
    cout<<average[1];


    cout<<"\nAverage Monthly Traffic Across the San Matero Bridge is  : ";
    for(int i=0;i<3;i++){
        sum[2]+=count_area[i].bridge_3;
        average[2]=sum[2]/3;
    }
    cout<<average[2]<<endl;

    cout<<"\nHighiest Monthly Traffic Across the Golden Gate Bridge is : ";
    for(int i=0;i<3;i++){
        if(largest[0]<count_area[i].bridge_1){
            largest[0]=count_area[i].bridge_1;
        }
    }
    cout<<largest[0];

    cout<<"\nHighiest Monthly Traffic Across the Bay Bridge is         : ";
    for(int i=0;i<3;i++){
        if(largest[1]<count_area[i].bridge_2){
            largest[1]=count_area[i].bridge_2;
        }
    }
    cout<<largest[1];

    cout<<"\nHighiest Monthly Traffic Across the San Matero Bridge is : ";
    for(int i=0;i<3;i++){
        if(largest[2]<count_area[i].bridge_3){
            largest[2]=count_area[i].bridge_3;
        }
    }
    cout<<largest[2]<<endl;

    return 0;
        
}