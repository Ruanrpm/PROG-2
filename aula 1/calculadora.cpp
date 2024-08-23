#include <iostream>

using namespace std;

int soma(float num1 , float num2) {
    int res;
    res = num1 + num2;
    return res;
}

int sub (float num1 , float num2) {
    int res;
    res = num1 - num2;
    return res;
}

int mult (float num1 , float num2) {
    int res;
    res = num1 * num2;
    return res;
}

float div (float num1 , float num2) {
    int res;
    res = num1 / num2;
    return res;
}

int main () {
    float num1 , num2;
    char op;
    float res;
    
    while ((cin >> num1 >> op >> num2)){
        switch (op) {
        case '+':
            res = soma(num1 , num2);
            break;
        case '-':
            res = sub(num1 , num2);
            break;
        case '*':
            res = mult(num1 , num2);
            break;
        case '/':
            res = div(num1 , num2);
            break;
        default:
            break;
    }
    cout << res << endl;
    }
   
}