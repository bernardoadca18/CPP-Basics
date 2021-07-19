#include <iostream>

int main()
{
    int colorChoice = 0;

    std::cout << "Pick a color (1: R, 2: G, 3: B): " << std::endl;
    std::cin >> colorChoice;

    switch (colorChoice)
    {
    case 1:
    {
        std::cout << "Color Red Picked" << "\n";
        break;
    }
    case 2:
    {
        std::cout << "Color Green Picked" << "\n";
        break;
    }
    case 3:
    {
        std::cout << "Color Blue Picked" << "\n";
        break;
    }
    default:
    {
        std::cout << "No such color" << "\n";
        break;
    }
    }

    return 0;
}