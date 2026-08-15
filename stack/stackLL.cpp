#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node*next;

   Node(int num){
    data=num;
    next=NULL;
   }

};
//  Node * top;
class stack{
    Node * top;

    public:
    stack(){
     top=NULL;
    }
    
    void push(int num){
        Node * newNode=new Node(num);
        if(newNode ==NULL){
            cout<<"Stack is FULL"<< endl;
            
        }
        newNode->next= top;
        top=newNode;
        cout<<"Element "<<num << " is pushed into stack"<<endl;
    }

    int pop(){
        if(top!=NULL){
            int ans= top->data;
            Node * temp = top;
            top=top->next;
            delete temp;
            return ans;
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    int peek(){
        if(top== NULL){
            cout<< "stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }

    void isEmpty(){
        if(top==NULL){
            cout<< "stack is empty"<<" "<<endl;
            
        }
        else{
            cout<< "Stack is not empty"<<" "<<endl;
            
        }
    }
};


int main(){
    stack s;
    s.isEmpty();

    s.push(8);
    s.push(9);
    s.push(5);
    s.isEmpty();

    int ans=s.pop();
    int ans4=s.peek();
    int ans2=s.pop();
    int ans3=s.pop();

    // int ans4=s.peek();
    cout<<"your Top of element is "<<ans4<<endl;

    cout<<ans<<"  " <<ans2<<" "<<ans3<<endl;
    s.isEmpty();




}