#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int x, n;
    cout << "Nhap x va n: ";
    cin >> x >> n;
    double S = sqrt(x), T = x;
    for (int i = 2; i <= n; ++i) 
    {
        T *= x;
        S = sqrt(T + S);
    }
    cout << "S(x,n) = " << S << endl;
    return 0;
}