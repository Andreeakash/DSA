#include<iostream>
using namespace std;

int main(){
    int Row;
    int Col;
    cout<<"Enter the value of RoW:";
    cin>>Row;
    cout<<"Enter the value of Col:";
    cin>>Col;

    for(int i=1;i<=Row;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }


}