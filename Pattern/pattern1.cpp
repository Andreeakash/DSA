#include<iostream>
using namespace std;


int main(){
    int Row;
    int Col;
    cout<<"Enter the value of RoW:";
    cin>>Row;
    cout<<"Enter the value of Col:";
    cin>>Col;

    for(int i=0;i<Row;i++){
        for(int j=0;j < Col;j++){
            cout<<'*';
        }
        cout<<endl;

    }

}

