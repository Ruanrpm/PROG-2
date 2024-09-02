#include <iostream>

using namespace std;

int mult(int *num1, int *num2);

int main () {
    int a , b;
    int *pa , *pb;

    cin >> a >> b;
    pa = &a;
    pb = &b;

    cout << mult(pa , pb) <<endl;
}

int mult(int *num1 , int *num2) {
    return *num1 * *num2;
}