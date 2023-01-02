#include<iostream>
using namespace std;

class B;

class A{
    int num1;
    public:
        void getNum(int n){
            num1 = n;
        }

        int showNum1(){
            return num1;
        }
        friend void SwapNum(A &,B &);
};

class B{
    int num2;
    public:
        void getNum(int n){
            num2 = n;
        }

        int showNum2(){
            return num2;
        }
        friend void SwapNum(A&,B&);
};

void SwapNum(A & obj1, B & obj2){
    int temp = obj1.num1;
    obj1.num1 = obj2.num2;
    obj2.num2 = temp;
}

int main(){

    A n1;
    B n2;
    n1.getNum(5);
    n2.getNum(6);
    cout<<"Before Swap N1 is : "<<n1.showNum1()<<endl;
    cout<<"Before Swap N2 is : "<<n2.showNum2()<<endl;
    SwapNum(n1,n2);
    cout<<"After Swap N1 is : "<<n1.showNum1()<<endl;
    cout<<"After Swap N2 is : "<<n2.showNum2()<<endl;
}