#include <iostream>

int main()
{
    int choice = 1;

    //While Loop
    //while (choice <= 0)
    //{
    //    std::cout << "Quit Program? (0: No / 1: Yes)" << "\n";
    //    std::cin >> choice;
    //}

    //Do while Loop
    do
    {
        std::cout << "Quit Program? (0: No / 1: Yes)" << "\n";
        std::cin >> choice;
    }
    while (choice <= 0);

    return 0;
}