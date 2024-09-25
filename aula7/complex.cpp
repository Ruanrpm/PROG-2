#include <iostream>

using namespace std;

typedef struct {
    int R = 0;
    int C = 0;
}complex;

void preencher_e_soma(complex *s , complex *t);
void soma(complex s , complex t);
void subtracao(complex s , complex t);
void produto(complex s , complex t) ;

int main() {
    complex a , b;

    preencher_e_soma(&a , &b);
    soma(a , b);
    subtracao(a , b);
    produto(a , b);
}

void preencher_e_soma(complex *s, complex *t) {
    cout << "Preencha o numero real e  sua parte complexa: " <<endl;
    cin >> s->R >> s->C;
    cout << "Preencha o numero real e  sua parte complexa novamente: " <<endl;
    cin >> t->R >> t->C;
}

void soma(complex s , complex t) {
    cout << "A soma dos numeros ficou a seguinte: " <<endl;
    cout << s.R + t.R << " + " << s.C + t.C << "i" << endl; 
}
void subtracao(complex s , complex t) {
    cout << "A subtracao dos numeros ficou a seguinte: " <<endl;
    cout << s.R - t.R << " + " << s.C - t.C << "i" << endl; 
}
void produto(complex s , complex t) {
    cout << "O produto dos numeros ficou a seguinte: " <<endl;
    cout << s.R * t.R << " + " << s.C * t.C << "i" << endl; 
}