#include <iostream>
using namespace std;

int main() {

    int a, b, c, d, e,k;
    cin >> a>>b>>c>>d>>e;

    int sum;
    sum = a * a + b * b + c * c + d * d + e * e;

    k = sum % 10;
        cout << k;
    return 0;
}