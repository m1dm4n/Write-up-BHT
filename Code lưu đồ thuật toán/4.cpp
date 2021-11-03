#include <iostream>
using namespace std;

int main() 
{
    int x, n, S{0};
    cout << "Nhap x va n: ";
    cin >> x >> n;
    int X = -x * x;
    for (int i = 1; i <= n; ++i)
    {
        S += X;
        X *= -x * x;
    }
    cout << "S(x,n)= " <<S << endl;
    return 0;
}