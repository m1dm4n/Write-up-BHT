#include<iostream>
using namespace std;

int main() 
{
  int n;
  do {
    cout << "Nhap n: ";
    cin >> n;
  }  while (n <= 0);
  if (n == 1)  
    n = 0;
  while (n % 5 == 0 && n > 5)
    n /= 5; 
  if (n % 5 == 0)
    cout << "co dang 5^m\n";
  else
    cout << "khong co dang 5^m\n";  
  return 0;
}