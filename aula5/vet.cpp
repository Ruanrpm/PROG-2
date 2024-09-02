#include <iostream>
#include <ctime>
#define N 6

using namespace std;

void inverter(int v[]);

int main () {
    int V[N];
    srand(time(NULL));
    for (int i = 0 ; i < N ; i++) {
        V[i] = rand() % 10;
    }
    for (int i = 0 ; i < N ; i++) {
        cout << V[i];
    }
    cout << endl;

    inverter(V);

}

void inverter(int v[]) {
    int aux = 0 , cont = 0;
    for (int i = N-1 ; i > (N/2)-1; i--) {
        aux = v[i];
        v[i] = v[cont];
        v[cont] = aux;
        cont++;
    }
    for (int i = 0 ; i < N ; i++) {
        cout << v[i];
    }
    cout << endl;
}