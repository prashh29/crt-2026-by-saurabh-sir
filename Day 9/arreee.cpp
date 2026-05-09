#include<iostream>
using namespace std;

int main(){

    int arr[5];
//taking input in array
    cout<<"Enter 5 numbers: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
//printing the array elements
    cout<<"The array elements are: "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
