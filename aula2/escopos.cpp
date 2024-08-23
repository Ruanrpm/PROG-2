#include <iostream>

using namespace std;

int globalVar = 5;

int soma (int);

int main() {
    int num;
    cin >> num;

    cout << soma(num) <<endl;
    cout << globalVar <<endl;
}

int soma (int numero) {
    if (numero > 1) {
        globalVar = globalVar + numero;
    }
    return globalVar;
}