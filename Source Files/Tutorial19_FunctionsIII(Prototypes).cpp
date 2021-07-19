#include <iostream>

//Function PROTOTYPE
//Function HEADER: Return-Type, Name, Input Parameters

int myFunction();   //PROTOTYPE
void myFunction2();
float myDivisionFunction(float, float);

int main()
{
    myFunction2();
    std::cout << myFunction() << '\n';
    std::cout << myDivisionFunction(4.f , 0.f) << '\n';
    return 0;
}

int myFunction()    //DEFINITION
{
    return 5 + 7;
}

void myFunction2()
{
    std::cout << "Hello" << '\n';
}

float myDivisionFunction(float a, float b)
{
    if(b == 0)
    {
        std::cout << "Division by 0" << '\n';
        return 0.f;
    }
    return a/b;
}