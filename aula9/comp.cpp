#include <iostream>

using namespace std;

void sttc();
int main() {
    sttc();
    sttc();
    sttc();
    sttc();
    sttc();
}

void sttc() {
    static int x = 0;
    x++;
    cout << x <<endl;
}