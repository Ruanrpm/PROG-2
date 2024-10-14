#include <iostream>
using namespace std;

int buscarElemento(int A[], int n, int v) {
    for (int i = 0; i < n; i++) {
        if (A[i] == v) {
            return i; 
        }
    }
    return -1;  
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    int v;

    cout << "Digite o valor a ser buscado: ";
    cin >> v;

    int resultado = buscarElemento(A, n, v);
    if (resultado != -1) {
        cout << "Elemento encontrado no índice: " << resultado << endl;
    } else {
        cout << "Elemento não encontrado." << endl;
    }

    return 0;
}

