#include <iostream>
#include <math.h>

int main()
{
    std::cout << "Please enter the number\n";
    int num;
    std::cin >> num;

    // make sure input number falls in the integer limit
    if (num > pow(2, 15))
    {
        std::cout << "\nInteger too big\n";
        return 1;
    }

    int constructed_number = 0;
    int reversed_number = 0;
    int p = 0;
    int digit = 0;
    int decimal_value = 0;

    while (num - constructed_number)
    {
        decimal_value = pow(10, p);
        digit = (num / (int)decimal_value) % 10;

        std::cout << "Digit: " << digit << "\n";

        reversed_number = (reversed_number * 10) + digit;

        constructed_number += decimal_value * digit;

        p += 1;
    }

    std::cout << "\nReversed: " << reversed_number << "\n";
    std::cout << "\nConstructed: " << constructed_number << "\n";
}
