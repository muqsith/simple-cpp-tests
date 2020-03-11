#include <iostream>

int main()
{

    
    static_assert(4 <= sizeof(int), "int size too short\n");

    return 0;
}