#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n % 2)
    {
    case 1:
        cout << "Odd Number";
        break;
    case 0:
        cout << "Even Number";
        break;
    }
}