#include <iostream>

using namespace std;

int *create_vector(int N);
void media_nt(int *V , int N);

int main() {
    int n;
    int *p = NULL;
    cin >> n;

    int* vetor = create_vector(n);

    p = vetor;
    media_nt(p , n);

    delete[] vetor;
}

int *create_vector(int N) {
    int *ptv;
    int *vector = new int[N];
    ptv = vector;

    if(!vector) {
        cout << "Erro na alocação de memória" <<endl;
        return 0;
    }

    for (int i = 0; i < N; i++) {
        cout << "Nota do aluno " << i+1 << ": ";
        cin >> *ptv;
        cout <<endl;
        ptv++;
    }
    
    return vector;
}

void media_nt(int *V , int N) {
    float aux = 0;

    for(int i = 0; i < N; i++) {
        aux += *V;
        V++;
    }

    cout << "Media: " << aux <<endl;
}