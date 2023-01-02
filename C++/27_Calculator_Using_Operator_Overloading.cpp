#include<iostream>
using namespace std;

class Calculator{
    private:
        double num;

        public:
            Calculator(){
                num=0;
            }
            void setNum(int n){
                num = n;
            }

            Calculator operator+(Calculator sum){
                Calculator temp;
                temp.num = num + sum.num;
                return temp;
            }


            Calculator operator-(Calculator sub){
                Calculator temp;
                temp.num = num - sub.num;
                return temp;
            }


            Calculator operator*(Calculator mult){
                Calculator temp;
                temp.num = num * mult.num;
                return temp;
            }


            Calculator operator/(Calculator div){
                Calculator temp;
                temp.num = num / div.num;
                return temp;
            }

            double ShowAns(){
                return num;
            }
};

int main(){
    system ("clear");
    Calculator n1,n2,Sum,Sub,Mult,Div;
    int num1,num2;
    char choice,ans;

    do{
    cout<<"Enter First Number      : ";
    cin>>num1;
    n1.setNum(num1);

    cout<<"Enter Second Number     : ";
    cin>>num2;
    n2.setNum(num2);

    cout<<"Enter Operand (+,-,*,/) : ";
    cin>>choice;

    switch (choice){
        case '+':
        Sum = n1+n2;
        cout<<"The Addition is         : "<<Sum.ShowAns()<<endl;
        break;

        case '-':
        Sub = n1-n2;
        cout<<"The Subtraction is      : "<<Sub.ShowAns()<<endl;
        break;

        case '*':
        Mult = n1*n2;
        cout<<"The Multiplication is   : "<<Mult.ShowAns()<<endl;
        break;

        case '/':
        Div = n1/n2;
        cout<<"The Division is         : "<<Div.ShowAns()<<endl;
        break;
    }

    cout<<"Do You Want to Perform an Other Operation?(Y/N) : ";
    cin>>ans;

    if(ans == 'n' || ans == 'N'){
        cout<<"Thanks For Using This Calculator!"<<endl;
        return 0;
    }
    }

    while(ans == 'y' || ans == 'Y');
}