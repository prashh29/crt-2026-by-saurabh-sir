#include<iostream>
using namespace std;
class studentm{

    public:
    string name,email,batch,crt_class_no;
    int roll_no;
    long long  mobile_no;

//default constructor
    studentm(){
        name = "your name please";
        email = "your email please";
        batch = "your batch please";
        crt_class_no = "your crt class no please";
        roll_no = 0;
        mobile_no = 0;
    }


    //parameterized constructor
    studentm(string n,string e,string b,string c,int r,long long  m){
        name = n;
        email = e;
        batch = b;
        crt_class_no = c;
        roll_no = r;
        mobile_no = m;
    }

    //member function
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"Batch: "<<batch<<endl;
        cout<<"CRT Class No: "<<crt_class_no<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Mobile No: "<<mobile_no<<endl;
    }

};
int main(){
    studentm s1;
    s1.show();
    studentm s2("Prashant","prash.00029@gmail.com","14-E","NIB 402",1514,9389401155);
    s2.show();
    return 0;
}