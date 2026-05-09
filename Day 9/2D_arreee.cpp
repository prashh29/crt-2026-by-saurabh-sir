#include<iostream>
using namespace std;

int main(){

    int arr[3][3];
//taking input in array
    cout<<"Enter 9 numbers: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
//printing the array elements
    cout<<"The array elements are: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
