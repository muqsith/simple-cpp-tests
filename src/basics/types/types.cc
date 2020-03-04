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

    double d1 {2.4};

    cout << " value of d1: " << d1 << "\n";

    auto name = "Muqsith";

    cout << " name is " << name << "\n";

    auto ns = {4.5, 3.9, 7.3};

    cout << " ns " << *(ns.begin()+1) << "\n";

    return 0;
}