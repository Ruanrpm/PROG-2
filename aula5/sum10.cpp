#include <iostream>

using namespace std;

int sum(int);

int main () {
    int a;
    cin >> a;


    cout << sum(a) <<endl;
}

int sum(int num1) {
    return num1 + 10;
}