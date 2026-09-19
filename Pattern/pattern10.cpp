#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Value of N:";
    cin>>n;

    
    for(int i=n-1;i>=0;i--){
        // first half
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
       
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}