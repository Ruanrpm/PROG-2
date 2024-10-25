#include <iostream>

using namespace std;


int trib(int n) {
    if (n <= 1) {
        return 0;
    }
    if(n == 2) {
        return 1;
    }
    return  trib(n-1) + trib(n-2) + trib(n-3);
}

int main() {
    int a;
    cin >> a;
    cout << trib(a) << endl;
}