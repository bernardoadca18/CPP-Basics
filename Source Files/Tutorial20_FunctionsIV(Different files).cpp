#include <iostream>
#include <string>
#include <vector>
#include".\Headers\myMathFunctions.h"

int main()
{
    int sum = add(10, 20);
    int result = subtract(20, 5);
    int product = multiplication(7, 9);

    std::cout << "The sum is: " << sum << '\n';
    std::cout << "The result is: " << result << '\n';
    std::cout << "The product is: " << product << '\n';

    return 0;
}