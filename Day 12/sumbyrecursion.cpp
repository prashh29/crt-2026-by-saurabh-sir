#include<iostream>
using namespace std;

int sumofnumber(int n,int sum){
    if(n==0){
     return sum;
    }
    sum+=n%10;
    return sumofnumber(n/10,sum);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    cout<<"Sum of digits of "<<n<<" is: "<<sumofnumber(n,sum)<<endl;
    return 0;
}