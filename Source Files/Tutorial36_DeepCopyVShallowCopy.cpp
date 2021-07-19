#include <iostream>
#include <string>

int main()
{
    int num1 = 10;
    int num2 = 20;

    int *intptr1 = new int(50);
    int *intptr2 = new int(30);

    //Shallow Copy
    //intptr1 = intptr2; Creates Memory leak

    //Deep Copy (Safe)
    *intptr1 = *intptr2;


    num1 = num2;

    std::cout << num1 << '\n';

    delete intptr1;
    delete intptr2;

    return 0;
}