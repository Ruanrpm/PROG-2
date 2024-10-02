#include <iostream>

using namespace std;

int main() {
    int x = 4 , y = 2;
    int *px = NULL , *py = NULL;
    px = &x;
    py = &y;
    cout << *px <<endl;
    (*px) -= (*py);
    cout << *px <<endl;
}