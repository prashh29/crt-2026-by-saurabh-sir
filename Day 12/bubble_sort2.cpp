#include<iostream>
using namespace std;

void swap_array(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int nums[],int n){
    for (int i=0; i<n-1; i++){
        bool flag=false;
        for (int j=0; j<n-i-1; j++){
            if (nums[j]>nums[j+1]){
                cout<<"array is sorted here: "<<endl;
                swap_array(nums[j], nums[j+1]);
                flag=true;
            }
        }
        if (!flag){
            cout<<"array is already sorted, no need to sort further: "<<endl;
            break;
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}