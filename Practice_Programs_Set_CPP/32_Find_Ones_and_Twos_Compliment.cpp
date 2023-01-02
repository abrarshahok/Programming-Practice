#include<iostream>
using namespace std;

class Twos_Compliment{
    private:
        string num;
        int carry; 
        public:
        Twos_Compliment(){
            num = " ";
            carry = 1;
        }
            void getBin(){
                cout<<"Enter Binary Number to Find its 2's Compliment : ";
                cin>>num;
                cout<<"Oringinal Number : "<<num<<endl;
            }

            void Make_Ones_Compliment(){
                for(int i=0; i<num.length(); i++){
                    if (num.at(i) == '0'){
                        num.at(i) = '1';
                    }

                    else{
                        num.at(i) = '0';
                    }
                }
            }

            void Make_Twos_Compliment(){
                for(int i=num.length()-1; i>=0; i--){
                    if(num.at(i) == '1' && carry ==1){
                        num.at(i) = '0';
                    }
                    else if(num.at(i) == '0' && carry ==1){
                        num.at(i) = '1';
                        carry = 0;
                    }
                }
            }

            void showBin(){
                for(int i=0; i<num.length(); i++){
                    cout<<num.at(i);
                }

            }

};

int main(){
    system("clear");
    Twos_Compliment bin;
    bin.getBin();
    cout<<"Ones Compliment : ";
    bin.Make_Ones_Compliment();
    bin.showBin();
    cout<<"\nTwos Compliment : ";
    bin.Make_Twos_Compliment();
    bin.showBin();
    cout<<endl;
}