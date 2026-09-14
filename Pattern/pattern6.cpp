#include<iostream>
using namespace std;

int main(){
    int Row;
    int Col;
    cout<<"Enter the Number of RoW:";
    cin>>Row;
    cout<<"Enter the column of Col:";
    cin>>Col;

    for(int i=Row;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}