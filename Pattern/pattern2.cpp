#include<iostream>
using namespace std;

int main(){
    int Row;
    cout<<"Enter the value of RoW:";
    cin>>Row;

    for(int i=1;i<=Row;i++){
        for(int j=1;j<=i;j++){
            cout<<"#";
        }
        cout<<endl;
    }


}