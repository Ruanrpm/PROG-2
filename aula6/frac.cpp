#include <iostream>

using namespace std;

/*bool has_zero(int a[], int n) { 
     for (int i = 0; i < n; i++) 
          if (a[i] == 0) 
               return true; 
          else 
               return false; 
}*/

// aqui e a função corrigida
bool has_zero(int a[], int n) { 
    bool verificacao = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            verificacao = false;
            return verificacao;
        } 
    }
    return verificacao;   
}

int main() {
    const int N = 6;
    int V[N];

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        V[i] = a;
    }
    has_zero(V , N);

}

// o erro e que quando e feito a primera verificaçao já e retornado true/false sem ver o resto do vetor