#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;


void bom_dia();
int aleat();
int dobro(int);
void mostra_dobro(int);

int main(){
	int x;
 
	bom_dia();
	cout << aleat() <<endl;
	x = aleat();
	if (dobro(x) > dobro(aleat())){
    		mostra_dobro(x);
	}
	return 0;
}

void bom_dia () {
    cout << "Bom Dia!!!" <<endl;
}
int aleat () {
    srand(time(NULL));
    int aleatorio = rand() % 50; 
    return aleatorio;
}
int dobro (int numero) {
    return numero * 2;
}
void mostra_dobro(int numero) {
    cout << numero * 2 <<endl;
}