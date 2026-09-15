#include<iostream>
using namespace std;

int main(){
    int N;

    cout<<"Enter the Number of N:";
    cin>>N;

    
    for(int i=1;i<=N;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
}