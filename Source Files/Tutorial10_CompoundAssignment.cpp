#include <iostream>

int main()
{
    int i = 20;
    int k = 10;
    std::cout << i << "\n";
    i += k;
    std::cout << i << "\n";
    i *= k;
    std::cout << i << "\n";
    i /= 2;
    std::cout << i << "\n";
    
    //++i = pre
    //i++ = post

    k = ++i;
    std::cout << k << "\n";
    std::cout << i << "\n";

    return 0;
}