#include <iostream>
#include <ctime>
#include "Header Files\Dice.h"

int main()
{
    srand(time(static_cast<unsigned>(0)));

    Dice d6;
    Dice d12(12, "Red");
    
    /*
    int diceSize = 0;
    int leave = 0;

    while(leave < 1)
    {
        std::cout << "Insira o tamanho do dado: ";
        std::cin >> diceSize;
        Dice dado(diceSize, "Yellow");
        std::cout << "Tiraste: " << dado.toss() << '\n';
    }*/

    
    std::cout << "Sorted Number: " << d6.toss() << "\nColor: " << d6.getColor() << '\n';
    std::cout << '\n';
    std::cout << "Sorted Number: " << d12.toss() << "\nColor: " << d12.getColor() << '\n';

    return 0;
}
