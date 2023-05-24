#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char c[1000];
    cin.getline(c, 1000);
    // fgets(c, 1000, stdin);
    // gets(c);
    cout << strlen(c) << endl;
    cout << c << endl;
}