#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter the Number of N:";
    cin>>N;

    char ch='A';
    for(int i=1;i<=N;i++){
        
        for(int j=0;j<i;j++){
            cout<<ch<<" ";
            
        }
        ch=ch+1;
        cout<<endl;
    }
}