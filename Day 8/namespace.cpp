#include<iostream>
using namespace std;

namespace Virat{
    void show(){
        cout<<"Virat kohli is the best batsman in the world"<<endl;
    }
    
}

namespace Rohit{
    void show(){
        cout<<"Rohit sharma is also a good player"<<endl;
    }
}

int main(){
    Virat::show();
    Rohit::show();
    return 0;
}