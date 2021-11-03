#include<iostream>
using namespace std;

bool check(int n) 
{
    return n == 1 ? true : (n % 5 != 0 ? false : check(n / 5));
}

int main()
{
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    }  while (n <= 0);
    if (check(n)) 
        cout << "co dang 5^m\n";
    else
        cout << "khong co dang 5^m\n";
    return 0;
}