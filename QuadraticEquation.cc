#include <tuple>
#include <stdexcept>
#include <iostream>
#include <string> 
#include <cmath>

std::pair<double, double> findRoots(double a, double b, double c)
{
     double x, y;
     x = (-b + sqrt(pow(b, 2) - 4*(a)*(c)))/(2*a); 
     y = (-b - sqrt(pow(b, 2) - 4*(a)*(c)))/(2*a); 
     return std::make_pair(x, y);   
      
}

#ifndef RunTests
int main()
{
    std::pair<double,double> roots = findRoots(2, 10, 8);
    std::cout << "Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second);
}
#endif
