#include <iostream>

using namespace std;

enum class Traffic_light { red, green, yellow };


Traffic_light& operator++(Traffic_light& t)
{
    switch (t)
    {
        case Traffic_light::red: return t = Traffic_light::green;
        case Traffic_light::green: return t = Traffic_light::yellow;
        case Traffic_light::yellow: return t = Traffic_light::red;
    }
}

int main()
{
    Traffic_light t = Traffic_light::green;
    if (++t == Traffic_light::yellow)
    {
        cout << "Yellow light\n";
    }

    enum Row {one=1, two=2, three=3};

    Row r = Row::two;

    if (r == 2)
    {
        cout << "It's second row\n";
    }


    return 0;
}