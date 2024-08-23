#include <iostream>
#include <ctime>

using namespace std;

int gerarNumeroAleatorio ();

int main() {
    srand(time(0));
    cout << gerarNumeroAleatorio() <<endl;
}

int gerarNumeroAleatorio () {
    return rand() % 100 + 1;
}