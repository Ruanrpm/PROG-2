#include <iostream>

using namespace std;

int main() {
    int v[4] = {1 , 2 , 3 , 4};
    int *pv = NULL;

    pv = v;

    for (int i = 0 ; i < 4 ; i++) {
        cout << *pv << endl;
        pv++;
    }
}