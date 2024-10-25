#include <iostream>

using namespace std;

int soma(int a) {
    if(a == 1) {
        return 1;
    }
    return a + soma(a-1);
}

int main() {
    int n;

    cin >> n;

    cout << soma(n) <<endl;  
}