#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main()
{
    cout << "Size of char on this machine is " << sizeof(char) << "\n";

    double d = 2.2;
    int i = 7;
    cout << " value of d: " << d << ", value of i: " << i << "\n";
    d = d + i;
    cout << " value of d: " << d << ", value of i: " << i << "\n";
    i = d * i;
    cout << " value of d: " << d << ", value of i: " << i << "\n";

    complex<double> z = 1;

    return 0;
}