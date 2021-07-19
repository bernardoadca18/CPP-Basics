#include <iostream>
#include <string>

int main()
{
    std::string sentence = "";
    int i = 0;
    int a = 0;

    std::cout << "Enter two numbers: ";
    std::cin >> i >> a;
    std::cout << "Your numbers are: " << i << " " << a << "\n";
    std::cin.ignore();

    std::cout << "Enter a sentence: " << "\n";
    std::getline(std::cin, sentence);
    std::cout << sentence << "\n";

    return 0;
}