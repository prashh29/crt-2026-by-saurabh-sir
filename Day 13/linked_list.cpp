#include<iostream>
using namespace std;

//node structure
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=nullptr;

    }

};

void printnode(node* curr){
    while(curr){
        cout<<curr->data<<endl;
        curr=curr->next;

    }
}

 int main(){
//create nodes
    node*first= new node(15);
    node*second= new node(20);
    node*third= new node(25);
    node*fourth =new node(30);
    node*fifth =new node(35);

    first->next=second;
    second->next=third;
    third->next=fourth;  
    fourth->next=fifth;
    fifth->next=nullptr;

    printnode(first);
    return 0;   
 }   