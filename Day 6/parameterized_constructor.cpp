#include<iostream>
using namespace std;

class student{
    //access specifier
    public:
    //data members
    string name;
    int roll_no;

    //parameterized constructor
    student(string n,int roll){
        name = n;
        this->roll_no = roll;
    }

    //member function
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
    }
};

int main(){
    //creating object of class student
    student s1("Prashant",1514);
    //calling member function
    s1.show();
    return 0;
}