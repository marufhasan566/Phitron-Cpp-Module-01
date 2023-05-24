#include <iostream>
#include <utility>
using namespace std;
// void func_swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
int main()
{
    int a, b;
    cin >> a >> b;
    // func_swap(&a, &b);
    // cout << a << " " << b << endl;

    cout << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}