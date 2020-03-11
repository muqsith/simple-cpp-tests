#include <iostream>
#include <cmath>

#include "mysqrt.h"
#include "Vec.h"

using namespace std;

double mysqrt(double num)
{
    return sqrt(num);
}

int main()
{
    Vec v(4);
    cout << "Vec is of size: " << v.size() << "\n";
    cout << "Enter " << v.size() << " numbers\n";
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
    cout << "Sum of vectors: " << v.sum() << "\n";

    double num = 625;

    cout << "Square root of " << num << " is " << mysqrt(num) << "\n";

    return 0;
}


