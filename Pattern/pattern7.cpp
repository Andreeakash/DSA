#include<iostream>
using namespace std;

int main(){
    int N;

    cout<<"Enter the Number of N:";
    cin>>N;

    //  for spacing 
    for(int i=N;i>0;i--){
        //  for spacing 
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        // for printing something
        for(int p=0;p<N-i;p++){
            cout<<"#";
        }
        // second half(horizontal)
        for(int p=0;p<N-1-i;p++){
            cout<<"#";
        }
        cout<<endl;
        
    }




}