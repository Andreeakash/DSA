#include<iostream>
using namespace std;

int main(){
    int Row;
    int Col;
    cout<<"Enter the Number of RoW:";
    cin>>Row;
    cout<<"Enter the column of Col:";
    cin>>Col;
    //  for spacing 
    for(int i=Row-2;i>=0;i--){
        //  for spacing 
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        // for printing something
        for(int p=0;p<Row-1-i;p++){
            cout<<"#";
        }
        // second half(horizontal)
        for(int p=0;p<Row-2-i;p++){
            cout<<"#";
        }
        cout<<endl;
        
    }




}