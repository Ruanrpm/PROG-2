#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

void par () {
    int num;

    cin >> num;

    if (num % 2 == 0) {
        cout << "Par" <<endl;
    }
    else {
        cout << "Impar" <<endl;
    }
}

int main () {
    par();
}