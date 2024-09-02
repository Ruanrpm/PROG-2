#include <iostream>

using namespace std;

int mult(int , int);

int main () {
    int a , b;
    cin >> a >> b;
    cout << mult(a , b) <<endl; 
}

int mult (int num1 , int num2) {
    return num1 * num2;
}