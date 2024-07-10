#include <iostream>
using namespace std;

int main() {

    int a,b;
    int flag=0;

    do {
        cin >> a >> b;
        if (a + b == 0) flag++;
        else {
            cout << a + b << "\n";
        }
    } while (flag ==0);
  

    return 0;
}