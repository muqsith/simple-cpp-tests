#include <iostream>

using namespace std;

struct Vec {
    int size;
    double* elem;
};

void init_vec(Vec& v, int s)
{
    v.size = s;
    v.elem = new double[s];
}

int main()
{
    Vec v;
    init_vec(v, 4);
    cout << "Vec is of size: " << v.size << "\n";
    cout << "Enter " << v.size << " numbers\n";
    for (int i = 0; i < v.size; i++) 
    {
        cin >> v.elem[i];
    }
    
    double sum = 0;
    for (int i = 0; i < v.size; i++)
        sum += v.elem[i];
    
    cout << "Sum : " << sum << "\n";
}