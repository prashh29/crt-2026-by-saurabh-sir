#include<iostream>
using namespace std;
class solution{
    public:
    int binary_search(int nums[],int n,int target)
    {
        int start=0;
        int end=n-1;    
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
                return mid; 
            else if(nums[mid]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        return -1;
    }
};
int main(){
    int nums[5]={1,2,3,4,5};
    int n=sizeof(nums)/sizeof(nums[0]);
    int target=5;
    solution s1;
    int result=s1.binary_search(nums,n,target);
    if(result!=-1)
        cout<<"Element found at index: "<<result<<endl;
    else
        cout<<"Element not found in the array."<<endl;
    return 0;
}