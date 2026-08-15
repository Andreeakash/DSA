

#include<iostream>
using namespace std;

class Node{
    int top;
    int *arr;
    int size;
    
    public:
    
    Node(int p){
        this->size=p;
        top=-1;
        arr= new int[p];
        
    }
    void push(int num){
        if(top<size-1){
            
            top++;
            arr[top]=num;
            
            
        }
        
    }
    int pop(){
        if(top>=0){
            int ans= arr[top];
            top--;
            return ans;
            
        }
        else{
            cout<<"stack is Empty";
            return 0;
        }
    }
    int peek(){
        if(top>=0){
            int ans= arr[top];
            return ans;
        }
        else{
            cout<<"stack is Empty";
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1) return 1;
        else return 0;
    }
    
};





int main()
{
    Node s1(8);
    s1.push(3);
    s1.push(4);
    
    int ans = s1.pop();
    cout<< ans;
    
    return 0;
}