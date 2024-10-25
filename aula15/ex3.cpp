#include <iostream>

using namespace std;


int pares(int n) {
    if (n <= 1) {
        return 0;
    }
    if(n % 2 == 0) {
        return n + pares(n-1);
    }
    return pares(n-1);
}

int main() {
    int a;
    cin >> a;
    cout << pares(a) << endl;
}