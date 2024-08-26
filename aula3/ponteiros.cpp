#include <iostream>

using namespace std;

int main () {
    float *fp = NULL;
    float numero1 = 7.3 , numero2 = 0;

    fp = &numero1;
    numero2 = *fp;

    cout << *fp << "\n" << numero2 << "\n" << &numero2 << "\n" <<  fp << "\n" << &numero1 <<endl;
}