#include <iostream>
using namespace std;

int main()
{
    int n, a{-2}, b=3, c=7;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 2; i <= n; ++i)
        a = 5 * a + 2 * b * 3 - 6 * c * 7 + 12;
    cout << "a" << n << " = " << a << endl;
    return 0;
}
