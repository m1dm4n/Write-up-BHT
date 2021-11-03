#include <iostream>
using namespace std;

int main() 
{
    int x, n, tich{1}, tong{0};
    double S{0.0};
    cout << "Nhap x va n: ";
    cin >> x >> n;
    for (int i = 1; i <= n; ++i)
    {
        tich *= x;
        tong += i;
        S += (double)tich / (double)tong;
    }
    cout << "S(x,n) = " << S << endl;
    return 0;
}