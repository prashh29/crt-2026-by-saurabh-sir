#include <iostream>

using namespace std;
// Base Class or Parent class
class Player
{
public:
    string name;
    int runs;

    void setName(string n)
    {
        name = n;
    }
    void setRuns(int r)
    {
        runs = r;
    }
};
// Dervied Class or Child class
class Cricketer : public Player
{
public:
    string country;
    void setCountry(string s)
    {
        country = s;
    }
    
};

class batter : public Cricketer{
    public:
    int centuries;
    void setCenturies(int c){
        centuries = c;
    }
    void show(){
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Country: " << country << endl;
        cout<<"Centuries: "<<centuries<<endl;
    }
};

int main()
{
    int runs;
    cin >> runs;
    batter c1;
    c1.setName("Virat kohli");
    c1.setCountry("India");
    c1.setRuns(runs);
    c1.setCenturies(50);
    c1.show();
    return 0;
}