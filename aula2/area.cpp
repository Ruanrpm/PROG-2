#include <iostream>

using namespace std;

double calcularAreaRetangulo (double , double);

int main() {
    double comp , larg;

    cin >> comp >> larg;
    cout << calcularAreaRetangulo(comp , larg) <<endl;
}

double calcularAreaRetangulo (double comprimento , double largura) {
    return comprimento * largura;
}