#include<iostream>
using namespace std;

class student{
    public:
    static int reg_no;
    student(){
        reg_no++;
    }

    static void showRegNo(){
        cout<<"Registration number: "<<reg_no<<endl;
    }
};
int student ::reg_no=100;
int main(){
    student s1;
    student s2;
    student s3;
    student ::showRegNo();
    student s4;
    student ::showRegNo();
    return 0;
}