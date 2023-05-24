#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Matched With One" << endl;
        break;
    case 2:
        cout << "Matched With Two" << endl;
        break;
    case 3:
        cout << "Matched With Three" << endl;
        break;
    case 4:
        cout << "Matched With Four" << endl;
        break;
    case 5:
        cout << "Matched With Five" << endl;
        break;
    default:
        cout << "Matched With None" << endl;
    }
}