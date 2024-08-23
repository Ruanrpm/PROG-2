#include <iostream>
#include <cmath>

using namespace std;

void fatorial (int num) {
    int res;
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
    int num;
    cin >> num;
    fatorial(num);
}