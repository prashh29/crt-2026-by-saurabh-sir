#include<iostream>
using namespace std;

class Solution {
public:
    bool ispoweroftwo(int n){
        if(n==0){
            return false;
        }
        if(n==1){
            return true;
        }
        return (n%2==0 && ispoweroftwo(n/2));
    }
};

int main(){
    int n;
    cin>>n;
    Solution s;
    cout<<s.ispoweroftwo(n)<<endl;
    return 0;   
}