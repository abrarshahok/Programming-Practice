#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Rectangle{
    private:
    int width,height;  
    
    public:
    void read_input(int w,int h){
        width = w;
        height = h;
    }
    
    void display(){
        cout << width << " " << height << endl;
        cout << width*height << endl;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    Rectangle obj;
    int w,h;
    cin>>w>>h;
    obj.read_input(w,h);
    obj.display(); 
    return 0;
}
