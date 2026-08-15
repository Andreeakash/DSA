#include<iostream>
using namespace std;


class Node {
    int data;
    Node * next;
    Node * prev;

    Node(int num){
        data= num;
        next=NULL;
        prev=NULL;
    }

};
