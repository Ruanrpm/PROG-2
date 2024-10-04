#include <iostream>

using namespace std;

int *create_vetor(int N);
void print_vetor(int *V , int N);

int main() {
    int n;
    int *pv;

    cin >> n;

    int* vetor = create_vetor(n);

    pv = vetor;

    print_vetor(pv , n);

    delete[] vetor;
}

int *create_vetor(int N) {
    int *pvc = NULL;

    int *vector = (int*)malloc(N * sizeof(int));
    pvc = vector;

    if (!vector) {
        cout << "Erro na alocação de memória" <<endl;
        return 0;
    }

    for (int i = 0; i < N; i++) {
        *pvc = i;
        pvc++;
    }
    return vector;
}

void print_vetor(int *V , int N) {
    for (int i = 0; i < N; i++) {
        cout << *V <<endl;
        V++;
    }
}