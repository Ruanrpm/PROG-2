#include <iostream>

using namespace std;

extern int a;

int main () {
    cout << a <<endl;
    a = 10;
    cout << a <<endl;
}