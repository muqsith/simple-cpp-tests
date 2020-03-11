#include <iostream>

using namespace std;

class Vec {
    public:
        Vec(int s) :sz{s}, elem{new double[s]} {}
        double& operator[](int i) 
        { 
            if (i < 0 || size() <= i) 
            {
                throw out_of_range{"Vec::operator[]"};
            }
            return elem[i]; 
        }
        int size() { return sz; }
    private:
        int sz;
        double* elem;
};

int main()
{
    int size;
    cout << "Give the size for your vector\n";
    cin >> size;

    Vec v(size);
    cout << "Vec is of size: " << v.size() << "\n";
    cout << "Enter " << v.size() << " numbers\n";
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
    
    int index = 0;

    for (int i = 0; i < v.size(); i++)
    {
        cout << "Provide the index of vector to see what you got there \n";
        cin >> index;
        try {
            double value = v[index];
            cout << "You got " << value << " at index " << index << " of vector \n";
        } 
        catch (out_of_range)
        {
            cout << "You provided incorrect index " << index << "\n";
        }
    }

    return 0;
}