#include <iostream>

using namespace std;

int sub(int*);

int main () {
    int a;
    int *p;
    cin >> a;
    p = &a;

    sub(p);
    cout << a <<endl;
}

int sub(int *num1) {
    return *num1 -= 5;
}