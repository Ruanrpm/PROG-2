#include <iostream>
#include <cmath>

using namespace std;

void volume () {
    int num , res;

    cin >> num;
    res = ((4)*3.14159265359 * pow(num , 3))/3;
    cout << res << endl;
}

int main () {
    volume();
}