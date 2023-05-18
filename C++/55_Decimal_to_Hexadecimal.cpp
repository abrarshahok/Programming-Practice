#include <iostream>
using namespace std;

int main() {
    int remainder,decimalNum;
    string hexaDecimal="";

    cout << "Enter Decimal Number : ";
    cin>>decimalNum;

    while (decimalNum != 0){
        remainder = decimalNum % 16;
        if(remainder < 9){
            hexaDecimal += (remainder+48);
        }
        else{
            hexaDecimal+=(remainder+55);
        }
        decimalNum/=16;
    } 

    cout << "Hexadecimal : " << hexaDecimal <<endl;
}
