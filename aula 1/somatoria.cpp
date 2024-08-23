#include <iostream>

using namespace std;

void somatoria () {
    int num1 , num2 , res;

    cin >> num1 >> num2;
    res = num1;
    while (num1 < num2) {
        res += num1+1;
        num1++;
    }
    cout << res <<endl;
}

int main () {
    somatoria();
}