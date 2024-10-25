#include <iostream>

using namespace std;

int soma = 1;
int digitos(int n) {
    if (n/10 == 0) {
        return soma;
    }
    soma++;
    return digitos(n/10);
}

int main() {
    int a;
    cin >> a;
    cout << digitos(a) << endl;
}