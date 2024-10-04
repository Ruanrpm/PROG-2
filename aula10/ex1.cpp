#include <iostream>

using namespace std;

int *create_vetor(int N);
void print_vetor(int *V , int N);

int main() {
    int n;

    cin >> n;

    int* vetor = create_vetor(n);
    print_vetor(vetor , n);
}

int *create_vetor(int N) {
    int *vector = (int*)malloc(N * sizeof(int));
    if (!vector) {
        cout << "Erro na alocação de memória" <<endl;
        return 0;
    }

    for (int i = 0; i < N; i++) {
        vector[i] = i;
    }
    return vector;
}

void print_vetor(int *V , int N) {
    for (int i = 0; i < N; i++) {
        cout << V[i] <<endl;
    }
}