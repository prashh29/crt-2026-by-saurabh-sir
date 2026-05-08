#include<iostream>
using namespace std;

class Area{
    private:
    int length;
    int width;
    public:

    //constructor
    Area(int l, int w){
        length=l;
        width=w;
    }

    friend void showArea(Area a);
};

void showArea(Area b){
    cout<<"area of rectangle: "<<b.length*b.width<<endl;
}


int main(){
    Area a1(10,20);
    showArea(a1);
    return 0;
}