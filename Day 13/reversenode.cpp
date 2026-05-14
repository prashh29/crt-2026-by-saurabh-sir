#include<iostream>
using namespace std;    
class listnode{
    public:
    int data;
    listnode* next;

    listnode(int data){
        this->data=data;
        this->next=nullptr;
    }
};

listnode* revrse(listnode*head){
    listnode*curr=head;
    listnode*temp=nullptr;

    while(curr){
        listnode*forward=curr->next;
        curr->next=temp;
        temp=curr;
        curr=forward;
    }
    return temp;
}