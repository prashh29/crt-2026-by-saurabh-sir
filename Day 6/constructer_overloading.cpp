#include<iostream>
using namespace std;

class student{
    public:
    int roll_no;
    string name;

    //default constructor
    student(){
        name = "your name please";
        roll_no = 0;
    }

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
    student s1; //default constructor will be called
    s1.show();
    student s2("Prashant",1514); //parameterized constructor will be called
    s2.show();
    return 0;
}