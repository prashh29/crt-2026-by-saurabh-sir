#include<iostream>
using namespace std;

int cokevol(int n){
    return n*250;
}


int main(){
    int n;
    cin>>n;
    cout<<cokevol(n)<<endl;
    return 0;
}