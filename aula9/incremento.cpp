#include <iostream>

using namespace std;

int main() {
    int a = 2;
    int *ptr = NULL;
    ptr = & a;
    ptr++;
    ptr--;
    cout << *ptr <<endl;
}