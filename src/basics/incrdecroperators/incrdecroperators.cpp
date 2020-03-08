#include <iostream>

using namespace std;

int main()
{
    int i = 2;
    cout << "(1) Intial value of i : " << i << ", after performing ++i : " << ++i << "\n";
    cout << "(2) Intial value of i : " << i << ", after performing ++i : " << ++i << "\n";

    int j = 9;
    cout << "(1) Intial value of j : " << j << ", after performing j++ : " << j++ << "\n";
    cout << "(2) Intial value of j : " << j << ", after performing j++ : " << j++ << "\n";

    return 0;
}