#include<iostream>
using namespace std;

void Nhon(double a, double b, double c) 
{
    if (a == b && b == c && a == c)
        cout << "Tam giac deu \n";
    else if (a == b || b == c || a == c)
        cout << "Tam giac nhon can \n";
    else
        cout << "Tam giac nhon \n" ;
}

void Tu(double a, double b, double c)
{
    if (a == b || b == c || a == c)
        cout << "Tam giac tu can \n";
    else
        cout << "Tam giac tu \n";
}

void Vuong(double a, double b, double c)
{
    if (a == b || b == c || a == c)
        cout << "Tam giac vuong can \n";
    else
        cout << "Tam giac vuong \n";
}

int main()
{
    double a, b, c;
    do {
        cout << "Nhap cac canh cua tam giac: ";
        cin >> a >>b >>c;
    } while (a < 0 || b < 0 || c < 0 || a >= b + c || b >= a + c || c >= a + b);

    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) 
        Vuong(a, b, c);
    else if (a*a > b*b + c*c || b*b > a*a + c*c || c*c > a*a + b*b) 
        Tu(a, b, c);
    else if (a*a < b*b + c*c || b*b < a*a + c*c || c*c < a*a + b*b)
        Nhon(a, b, c);

    return 0;
} 
