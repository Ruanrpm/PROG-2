#include <iostream>
#include <cmath>

using namespace std;

void volume (int num) {
    int res;
    res = ((4)*3.14159265359 * pow(num , 3))/3;
    cout << res << endl;
}

int main () {
    int num;
    cin >> num;
    volume(num);
}