#include<iostream>
using namespace std;   

void sumofnumbers(int n, int &sum) {
    if (n == 0) {
        return;
    }
    sum += n;
    sumofnumbers(n - 1, sum);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    sumofnumbers(n, sum);

    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}