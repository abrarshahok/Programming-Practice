#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
        void twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(target == (nums.at(i)+nums.at(j))){
                    cout<<"["<<i<<","<<j<<"]"<<endl;
                }
            }
        }
    }
    
};

int main(){
    Solution obj;
    int Element,target,size;
    cout<<"Enter Size of Vector : ";
    cin>>size;
    vector <int> vec(size);
    cout<<"Enter Elements : ";
    for(int i=0; i<vec.size(); i++){
        cin>>Element;
        vec.at(i) = Element;
    }
    cout<<"Enter Target : ";
    cin>>target;
    obj.twoSum(vec,target);
}