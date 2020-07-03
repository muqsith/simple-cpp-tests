// Courtesy 
// Cherno: https://youtu.be/mWgmBBz0y8c

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

void ForEach(const std::vector<int>& values, const std::function<void(int)> &func)
{
    for (int value : values)
        func(value);
}



int main()
{
    std::vector<int> values = { 1, 2, 3, 4, 5, 6, 7, 8 };

    int a = 5;

    ForEach(values, [&a](int value) { std::cout << "Value: "  << a * value << std::endl; });
}
