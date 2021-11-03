#include <iostream>
using namespace std;

int Sumofn(int n)
{
    if (n == 0) return 0;
    return n % 10 + Sumofn(n / 10);
}

int main() 
{
    int n;
    do{
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    cout << "Tong cac chu so cua n: " << Sumofn(n) << '\n' ;
    return 0;
}