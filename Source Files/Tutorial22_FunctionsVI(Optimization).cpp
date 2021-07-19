#include <iostream>

void function1(int&, const int&);
const float median(const int&, const int&, const int&);

int main()
{
    int a = 20;
    int b = 10;
    
    function1(a, b);

    std::cout << a << '\n';
    std::cout << median(70, 61, 12) << '\n';
    std::cout << &a << '\n';

    return 0;
}

//Does a value need to be changed? If not make it const, else make it a refernce.
void function1(int& valueToChange, const int& newValue)
{
    /*Get a variable as reference and replace its value with another given value*/
    valueToChange = newValue;
}

const float median(const int& a, const int& b, const int& c)
{
    return (a + b + c) / 3.f;
}