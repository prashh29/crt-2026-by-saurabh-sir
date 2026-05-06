#include<iostream>
using namespace std;

class student{
    //access specifier
    public:
    //data members
    string name;
    int roll_no;

    //constructor
    student(){
        name = "your name please";
        roll_no = 0;
    }

    //member function
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
    }
};

int main(){
    //creating object of class student
    student s1;
    //calling member function
    s1.show();
    return 0;
}