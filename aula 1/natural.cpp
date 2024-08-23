#include <iostream>
#include <cmath>

using namespace std;

void fatorial () {
    int num , res;

    cin >> num;
    res = num;
    if (num > 1) {
        for (int i = num-1; i > 0; i--) {
            res = res * i;
        }
    }
    else if (num = 0 || num == 1) {
        cout << num <<endl;
    }
    cout << res <<endl;
}

int main () {
    fatorial();
}