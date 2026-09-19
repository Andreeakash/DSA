#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the Number of N:";
    cin>>n;

    // Rows printing
    for(int i=n-1;i>=0;i--){

        // for spacing
        for(int j=n-1;j>i;j--){
            cout<<" ";

        }
        // for printing something
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        // for again printing somethig
        for(int j= 0 ; j < i ;j++){
            cout<<"*";
        }
        cout<<endl;







    }





}