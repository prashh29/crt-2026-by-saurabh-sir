#include<iostream>
using namespace std;

int main(){

    int a=5;
    int*ptr=&a;
    cout<<"value:"<<a<<endl;
    cout<<"address:"<<ptr<<endl;

    *ptr=20;
    cout<<"updated value:"<<a<<endl;
    return 0;
}