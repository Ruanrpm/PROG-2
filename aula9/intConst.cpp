#include <iostream>

using namespace std;

int main() {
    int a = 1;
    const int  b = 2;
    int *ptr = NULL;

    ptr = &a;
    cout << a <<endl;
    (*ptr)+=b;
    cout << a <<endl;
    (*ptr)-=b;
    cout << a <<endl;
}