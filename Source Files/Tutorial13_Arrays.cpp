#include <iostream>
#include <string>

int main()
{
    const int arraySize = 12;
    int myArray[arraySize] = {0}; //= {10, 20, 45, 32, 156, 79, 97, 822, 6482, 82053}; //Uninitialized Array

    myArray[4] = 33;
    myArray[5] = 100;
    myArray[9] = myArray[4] * myArray[5];

    for(int i = 0; i < arraySize; i++)
    {
        std::cout << i << ": " << myArray[i] << "\n";
    }

    std::cout << '\n';


    const int arraySizeStrings = 3;
    std::string myStringArray[arraySizeStrings] = { "NONE" };

    //myStringArray[2] = "String 3";

    for(int i = 0; i < arraySizeStrings; i++)
    {
        std::cout << i << " - Enter a name: " << '\n';
        std::getline(std::cin, myStringArray[i]);
    }

    for(int i = 0; i < arraySizeStrings; i++)
    {
        std::cout << i << ": " << myStringArray[i] << "\n";
    }

    return 0;
}