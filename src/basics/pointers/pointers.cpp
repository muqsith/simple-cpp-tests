#include <iostream>

using namespace std;

struct Vec
{
    int size;
    double *elem;
};

void init_vec(Vec &v, int s)
{
    v.size = s;
    v.elem = new double[s];
}

void init_vec2(Vec *v, int s)
{
    v->size = s;
    v->elem = new double[s];
}

void use_vec()
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

void use_vec2()
{
    Vec* v = new Vec;
    init_vec2(v, 4);
    cout << "Vec is of size: " << v->size << "\n";
    cout << "Enter " << v->size << " numbers\n";
    for (int i = 0; i < v->size; i++) 
    {
        cin >> v->elem[i];
    }
    
    double sum = 0;
    for (int i = 0; i < v->size; i++)
        sum += v->elem[i];
    
    cout << "Sum : " << sum << "\n";
}

int main()
{
    // pointers: are reference to the address of the variable
    int i = 10;
    int* ip = &i;
    
    // references: are aliases(soft links) to a variable
    int j = 20;
    int& k = j;

    // ways you can initialize objects in c++, it's use in constructor is called initializer list
    int size = 4;
    Vec vv {
        size: 4,
        elem: new double[4]
    };

    int z {size};
    

    use_vec2();
}