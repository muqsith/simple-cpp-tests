#include <iostream>

using namespace std;

class Vec {
    public:
        // constructor can be initialized in below two ways
        // below one is called initializer list
        Vec(int s) :sz{s}, elem{new double[s]} {}
        // below one is normal way like in other languages like JS, Java (but there is no `this`)
        /*
        Vec(int s) {
            sz = s;
            elem = new double[s];
        }
        */
        double& operator[](int i) { return elem[i]; }
        int size() { return sz; }
    private:
        int sz;
        double* elem;
};


double sum_vec(Vec& v)
{
    double sum = 0;
    for(int i = 0; i < v.size(); i++)
        sum += v[i];
    
    return sum;
}

int main()
{
    Vec v(4);
    cout << "Vec is of size: " << v.size() << "\n";
    cout << "Enter " << v.size() << " numbers\n";
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
    cout << "Sum of vectors: " << sum_vec(v) << "\n";
    return 0;
}