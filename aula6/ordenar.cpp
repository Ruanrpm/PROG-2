#include <iostream>

using namespace std;

void ordenar(int* , int*);

int main() {
    int var1 , var2;
    int *p1 , *p2;

    p1 = &var1;
    p2 = &var2;

    cin >> var1 >> var2;

    ordenar(p1 , p2);

    cout << var1 << "\n" << var2 <<endl;
}

void ordenar(int *a , int *b) {
    int aux;
    if (*a < *b? aux = *a , *a = *b , *b = aux : NULL);
}