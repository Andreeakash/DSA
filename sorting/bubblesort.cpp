#include<iostream>
using namespace std;


int main(){
    int arr[10]={22,45,1,33,12,10,11,5,12,10};
    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;

    //  Before sorting Array
    cout<< "Before sorting :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //  bubble sort -> "Compare adjacent elements, swap if out of order, repeat n times so largest bubbles to the end.
    int pass, i,flag;
    //  flag is used for when the array is sorted 
    for(pass=1;pass<n;pass++){
        flag=0;
        for(i=0;i<n-1-pass;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
            if(flag==0){
                break;
            }
        }
    }

    cout<<endl;

    cout<< "After sorting :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}