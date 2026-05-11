#include<iostream>
using namespace std;
class solution{
    public:
    int linear_search(int nums[],int n,int target)
    {
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
                return i; 
        }
        return -1;
    }
};
int main(){
    int nums[5]={1,2,3,4,5};
    int n=sizeof(nums)/sizeof(nums[0]);
    int target=3;
    solution s1;
    int result=s1.linear_search(nums,n,target);
    if(result!=-1)
        cout<<"Element found at index: "<<result<<endl;
    else
        cout<<"Element not found in the array."<<endl;
    return 0;
}