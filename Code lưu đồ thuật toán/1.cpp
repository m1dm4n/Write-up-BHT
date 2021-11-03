#include <iostream>
using namespace std;

int main() 
{
    int x, S;
    cout << "Nhap x: ";
    cin >> x;
    S = x * x;
    S = S * S * x;
    S = S * S * x;
    cout << "x^11 = " << S << endl;
    return 0;
}