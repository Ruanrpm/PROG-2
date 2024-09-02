#include <iostream>

using namespace std;

int sum(int *num1);

int main () {
    int a;
    int *p;
    cin >> a;
    p = &a;

    sum(p);
    cout << a <<endl;
}

int sum(int *num1) {
    return *num1 += 10;
}