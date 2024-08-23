#include <iostream>

using namespace std;

void mult () {
    int num;

    cin >> num;

    if (num % 4 == 0) {
        cout << "E multiplo de quatro" <<endl;
    }
    else {
        cout << "Nao e multiplo de quatro" <<endl;
    }
}

int main () {
    mult();
}