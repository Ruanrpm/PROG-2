#include <iostream>
#define N 5
#define maiorPositivo 100000000;

using namespace std;

void maior(int[] , int*);

void media(int[] , double*);

void positivos(int[] , int*);

void maiorMenor(int[] , int* , int*);

int main() {
    int v[N];

    int max , pos , min;
    int *pmaior , *ppos , *pmin;
    double med;
    double *pmed;

    pmaior = &max;
    pmed = &med;
    ppos = &pos;
    pmin = &min;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        v[i] = a;
    }
    maior(v , pmaior);
    media(v , pmed);
    positivos(v , ppos);
    maiorMenor(v , pmaior , pmin);

    cout << "\nmaior " << max <<endl;
    cout << "media " << med <<endl;
    cout << "positivos " << pos <<endl;
    cout << "maior " << max << " menor " << min <<endl;
}

// 1
void maior(int a[] , int *p) {
    int aux = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] > aux) {
            *p = a[i];
            aux = a[i];
        }
    }
}

// 2
void media(int a[] , double *p) {
    int aux = 0;
    for (int i = 0; i < N; i++) {
        aux += a[i];
    }
    *p = aux / N;
}

// 3
void positivos(int a[] , int *p) {
    int aux = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] > 0) {
            aux++;
        }
    }
    *p = aux;
}

// 5

void maiorMenor(int a[] , int *p , int *p2) {
    int aux = 0 , aux2 = maiorPositivo;
    for (int i = 0; i < N; i++) {
        if (a[i] > aux) {
            *p = a[i];
            aux = a[i];
        }
        if (a[i] < aux2) {
            aux2 = a[i];
            *p2 = a[i];
        }
    }
}