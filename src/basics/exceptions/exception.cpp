#include <iostream>

using namespace std;

class Vec
{
public:
    Vec()
    {
        sz = 0;
        elem = nullptr;
    }
    Vec(int s)
    {
        if (s < 0)
            throw length_error{"invalid length for the vector"};
        if (s > 100)
            throw bad_alloc{};
        sz = s;
        elem = new double[s];
    }

    ~Vec()
    {
        delete[] elem;
    }

    double &operator[](int i)
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
    double *elem;
};

Vec get_vec()
{
    int size;
    cout << "Give the size for your vector\n";
    cin >> size;
    Vec v;
    try
    {
        v = Vec(size);
    }
    catch (length_error)
    {
        cout << "Negative size is not allowed\ntry again\n";
        return get_vec();
    }
    catch (bad_alloc)
    {
        cout << "You just tried to kill the computer\ntry again\n";
        return get_vec();
    }
    return v;
}

int main()
{
    Vec v = get_vec();
    cout << "Vec is of size: " << v.size() << "\n";
    if (v.size() > 0)
    {
        cout << "Enter " << v.size() << " numbers\n";
        for (int i = 0; i < v.size(); i++)
            cin >> v[i];

        int index = 0;

        for (int i = 0; i < v.size(); i++)
        {
            cout << "Provide the index of vector to see what you got there \n";
            cin >> index;
            try
            {
                double value = v[index];
                cout << "You got " << value << " at index " << index << " of vector \n";
            }
            catch (out_of_range)
            {
                cout << "You provided incorrect index " << index << "\n";
            }
        }
    }

    return 0;
}