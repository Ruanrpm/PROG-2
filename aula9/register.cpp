#include <iostream>

using namespace std;

void rgt();

int main() {
    rgt();
    rgt();
    rgt();
    rgt();
    rgt();
}

void rgt(){
    register int a = 0;
    a++;
    cout << a <<endl;
}