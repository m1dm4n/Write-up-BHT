#include <iostream>
using namespace std;

int main() 
{
    int n,i{0};
    do {cin >> n;}  while (n < 0);
    while (i*i<n)
        ++i;
    if (i*i==n)
        cout << "so chinh phuong \n";
    else
        cout << "khong phai so chinh phuong \n";
    return 0;
}