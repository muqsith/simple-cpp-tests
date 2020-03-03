#include <iostream>

bool isPrime(int num)
{
    if (num < 2) 
    {
        return false;
    } else if (num == 2) 
    {
        return true;
    } else 
    {
        bool result = false;
        for (int i = 2; i < num; i += 1) 
        {
            result = ((num % i) == 0);
            if (result)
            {
                break;
            } 
        }
        return result;
    }
}

int main() 
{
    std::cout << "Please enter the number\n";
    int n;
    std::cin >> n;
    std::cout << n << " is" << (isPrime(n) ? " not prime" : " prime") << "\n";
}