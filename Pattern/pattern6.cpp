#include<iostream>
using namespace std;

int main(){
    int Row;
    cout<<"Enter the Number of RoW:";
    cin>>Row;


    for(int i=Row;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}