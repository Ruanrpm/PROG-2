#include <iostream>

using namespace std;

int main() {
    int y = 0 , x = 0;
    int *px = NULL , *py = NULL;

    px = &x;
    py = &y;

    if (px > py? cout << "x" <<endl : cout << "y" <<endl);
} 