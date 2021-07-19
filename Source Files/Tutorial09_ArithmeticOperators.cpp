#include <iostream>

int main()
{
    int x = 0;
    int y = 23;

    float f1 = 6.0f;
    float f2 = 4.0f;

    x = y + 2;
    std::cout << "Y + 2 " <<  x << "\n";
    x = 2 + 3;
    std::cout << "+ " <<  x << "\n";
    x = 5 - 4;
    std::cout << "- " <<  x << "\n";
    x = 4 * 3;
    std::cout << "* " <<  x << "\n";
    x = 6 / 4;
    std::cout << "/ " <<  x << "\n";
    x = 6 % 4;
    std::cout << "% " <<  x << "\n";

    std::cout << "Proper Division " <<  f1/f2 << "\n";

    return 0;
}