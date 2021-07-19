#include <iostream>

int main()
{
    int i = 20;
    int k = 30;
    double d = 20.3;

    //Type, refernce operator, initial value.
    int& r = i;
    double& dr = d;
    r = k;
    r = 10;
    std::cout << INT32_MAX << '\n';

    return 0;
}