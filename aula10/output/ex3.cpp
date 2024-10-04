#include <iostream>

using namespace std;

int *create_vector(int N);
void media_nt(int *V , int N);

int main() {
    int n;
    cin >> n;

    int* vetor = create_vector(n);
    media_nt(vetor , n);

    delete[] vetor;
}

int *create_vector(int N) {
    int *vector = (int*)malloc(N * sizeof(int));

    if(!vector) {
        cout << "Erro na alocação de memória" <<endl;
        return 0;
    }

    for (int i = 0; i < N; i++) {
        cout << "Nota do aluno " << i+1 << ": ";
        cin >> vector[i];
        cout <<endl;
    }
    
    return vector;
}

void media_nt(int *v , int N) {
    float aux = 0;

    for(int i = 0; i < N; i++) {
        aux += v[i];
    }

    cout << "Media: " << aux/N <<endl;
}