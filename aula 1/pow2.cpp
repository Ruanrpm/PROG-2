#include <iostream>
#include <cmath>

using namespace std;

void pow (int num, int esp) {
    int res;
    res = num;
    if (esp >= 1) {
        for (int i = 1; i < esp; i++) {
            res = res * num;
        }
    }
    else if (esp == 0) {
        res = 1;
    }
    cout << res <<endl;
}

int main () {
    int num , esp;
    cin >> num >> esp;
    pow(num , esp);
}