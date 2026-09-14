#include<iostream>
using namespace std;

int main(){
    int arr[10]={22,45,1,33,12,10,11,5,12,10};
    int n=10;


    //  Before sorting Array
    cout<< "Before sorting :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // Selection Sort-> find minimum and place it at ith index


    for (int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
    
    cout<<endl;


    //  After sorting Array
    cout<<"After Sorting :";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}