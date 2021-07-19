#include <iostream>
#include <string>

int main()
{
    int i = 0;
    std:: string sentence = "";

    std::cout << "Input a number: ";
    std::cin >> i;

    if(i == 23)
    {
        std::cout << "The integer is 23" << "\n";
        i = 44;
    }
    else if(i < 23)
    {
        std::cout << "The integer is less than 23" << "\n";
        i = 55;
    }
    else
    {
        std::cout << "The integer was none of the above" << "\n";
    }

    std::cout << "The integer value is: " << i << "\n";

    system("PAUSE");
    return 0;
}