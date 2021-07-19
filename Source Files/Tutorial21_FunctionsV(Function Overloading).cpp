#include <iostream>
#include ".\Headers\myMathFunctions.h"

/*
    int add(int, int);
    int add(float, int);
    float add(float, float);
    float add(float, float, float);
*/

int main()
{
    std::cout << add(5, 5) << '\n';
    std::cout << add(5.2f, 9.5f, 4.4f) << '\n';
    std::cout << add(5.52f, 9) << '\n';
    std::cout << division(5.52f, 9.f) << '\n';
    std::cout << division(95, 9) << '\n';
    return 0;
}