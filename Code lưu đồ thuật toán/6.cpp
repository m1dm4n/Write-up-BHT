#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double e{1.0}, S{0};
    while (1/e >= 0.000001) {
        S += 1/e;
        ++e;
    }
    cout << "S(n) voi do chinh xac 10^-6: " << S << endl;
    return 0;
}