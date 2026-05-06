#include<iostream>
using namespace std;
class student{
    //access specifier
    public:
    //data members
    string name;
    int roll_no;

    //member function
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
    }
};

int main(){
    //creating object of class student
    student s1;
    //assigning values to data members
    s1.name = "Prashant";
    s1.roll_no = 1514;
    //calling member function
    s1.show();
    return 0;
}