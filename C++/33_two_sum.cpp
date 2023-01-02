// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example :
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


#include <iostream>
using namespace std;
int main(){

    system("clear");
    
    int target,n;

    cout<<"How Many Elements You want to Input : ";
    cin>>n;
    int nums[n];
    
    cout<<"Enter Element of Arrays : ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    
    cout<<"Enter Target : ";
    cin>>target;
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
        if(nums[i]+nums[j]==target){
            cout<<"[ "<<i<<" , "<<j<<" ]";
        }
    }
    
}
}