#include "Vec.h"

Vec::Vec(int s) :sz{s}, elem{new double[s]} {}

double& Vec::operator[](int i)
{
    return elem[i];
}

int Vec::size()
{
    return sz;
}

double Vec::sum()
{
    double sum = 0;
    for(int i = 0; i < size(); i++)
        sum += elem[i];
    
    return sum;
}