#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter the Number of N:";
    cin>>N;

    
    for(int i=N;i>0;i--){
        char ch='A';
        for(int j=0;j<i;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
}