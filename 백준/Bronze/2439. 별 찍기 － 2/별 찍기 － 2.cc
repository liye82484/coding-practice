#include <iostream>
#include <string>
using namespace std;

int main()
{

    double n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}