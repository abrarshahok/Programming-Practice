#include<iostream>
using namespace std;

class Student{
    private:
        int scores[5];

            public:
                void input(){
                    for(int i=0; i<5; i++){
                        cin>>scores[i];
                    }
                }

                int calcTotalScore(){
                    int total=0;
                    for(int i=0; i<5; i++){
                        total+=scores[i];
                    }

                    return total;
                }
};

int main(){
    int num = 0;
    int n;
    cin>>n;
    Student st[n];
    for(int i=0; i<n; i++){
        st[i].input();
    }

    for(int i=0; i<n; i++){
        st[i].calcTotalScore();
    }

    int kritens_score = st[0].calcTotalScore();

    for(int i=1; i<n; i++){
        if(kritens_score < st[i].calcTotalScore()){
            num+=1;
        }
    }
    cout<<num;
}