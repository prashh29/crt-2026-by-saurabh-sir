#include<iostream>
using namespace std;

class Atm{
    private:
    int balance;
    
    public:
    //encapsulation is the process of hiding the data members of a class and providing access to them through member functions.
    void setBalance(int b){
        this->balance=b;
    }
    //Abstraction is the process of hiding the implementation details and showing only the functionality to the user.
    void withdraw(int amount){
        if(amount>balance){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance-=amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
    }
    void showbalance(){
        cout<<"current balance: "<<balance<<endl;
    }
    //getter function or encapsulation
    int getBalance(){
        return balance;
    }
};


int main(){
    Atm a;
    a.setBalance(10000);
    a.withdraw(1543);

    cout<<"Balance: "<<a.getBalance()<<endl;
    return 0;
}