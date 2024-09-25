#include <iostream>

using namespace std;

typedef struct {
    float x = 0;
    float y = 0;
    float z = 0;
}vetor;


void preencher(vetor *va, vetor *vb);

void soma(vetor va, vetor vb, vetor *vc);

int main() {
    vetor v1 , v2 , v3;

    preencher(&v1 , &v2);
    soma(v1 , v2 , &v3);
    cout << "vetor na coordenada x: " << v3.x <<endl;
    cout << "vetor na coordenada y: " << v3.y <<endl;
    cout << "vetor na coordenada z: " << v3.z <<endl;
}

void preencher(vetor *va, vetor *vb) {
    cout << "Preencha o vetor a:" <<endl;
    cin >> va->x >> va->y >> va->z;
    cout << "preencha o vetor b:"<< endl;
    cin >> vb->x >> vb->y >> vb->z;
}

void soma(vetor va, vetor vb, vetor *vc) {
    cout << "Esse e o vetor resultado das somas de a e b." <<endl;
    vc->x = va.x + vb.x;
    vc->y = va.y + vb.y;
    vc->z = va.z + vb.z;
}