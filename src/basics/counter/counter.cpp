#include <iostream>

using namespace std;

int count_x(char* p, char x)
{
    if (p == nullptr) return 0;
    int count = 0;
    for (;*p != 0; ++p)
    {
        if (*p == x)
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    char v[] = {'m','u','q','s','i','t','h','i','r','f','a','n'};
    int result = count_x(&v[0], 'i');
    cout << result << "\n";
}