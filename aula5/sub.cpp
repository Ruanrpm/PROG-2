#include <iostream>

using namespace std;

int sub(int);

int main () {
    int a;
    cin >> a;


    cout << sub(a) <<endl;
}

int sub(int num1) {
    return num1 - 5;
}