#include <iostream>

using namespace std;

typedef struct {
    int hora;
    int minutos;
}horario;

typedef struct {
    int dia;
    int mes;
    int ano;
}data;

typedef struct {
    horario horas;
    data dia;
    string descricao;
}compromisso;

void agenda(compromisso *compromisso);

int main() {
    compromisso NovoCompromisso;
    compromisso V[50];
    int i = 0;
    char var;
    do{
        agenda(&V[i]);
        i++;
        cout << "Deseja continuar?: ";
        cin >> var;
    } while (var != 'N');
}

void agenda(compromisso *compromisso) {
    cout << "Digite o horario do comprimisso: ";
    cin >> compromisso -> horas.hora >> compromisso -> horas.minutos;
    cout <<endl << "Data:";
    cin >> compromisso -> dia.dia >> compromisso -> dia.mes >> compromisso -> dia.ano;
    cout <<endl << "Descricao do compromisso: ";
    cin.get();
    getline(cin, compromisso -> descricao);

    cout << "Horario:  " << compromisso->horas.hora << ":" << compromisso->horas.minutos <<endl;
    cout << "Data:  " << compromisso->dia.dia << "/" << compromisso->dia.mes << "/" << compromisso->dia.ano <<endl;
    cout << "descricao: " << compromisso->descricao << endl;
}