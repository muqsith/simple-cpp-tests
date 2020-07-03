// Courtesy: https://youtu.be/fbYknr-HPYE

#include <iostream>

int main()
{
    int x = 10;


    int &&y = 12; // rvalue references

    const int &z = 14;  // rvalue references

    std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;

}