#include <iostream>

int addTwoNumbers(int a, int b)
{
    std::cout << "A: " << a << '\n';
    std::cout << "B: " << b << '\n';
    return a + b;
}

void printResult(int a, int b, int c)
{
    int sum = a + b + c;
    std::cout << sum << '\n';
}

void hello()
{
    std::cout << "From function" << '\n';
}

int main()
{
    std::cout << addTwoNumbers(5, 7) << '\n';
    std::cout << addTwoNumbers(525, 91) << '\n';

    int sum = addTwoNumbers(50, 20);

    std::cout << sum << '\n';

    printResult(4, 9, 8);
    printResult(15, 9, 8);

    int a1 = 20;
    int b1 = 30;
    int c1 = 40;

    std::cout << addTwoNumbers(a1, b1) << '\n';
    printResult(a1, b1, c1);

    hello();

    return 0;
}