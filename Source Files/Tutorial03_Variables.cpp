#include <iostream>
#include <string>

int main()
{
    int i = 34;                                 //Integer
    double d = 30 + 0.1231185;                  //Double precision variable
    float f = 20.48779631;                      //Floating point variable
    char c = 'a';                               //Character (ASCII TABLE)
    std::string s = "Str";   //String Variable
    bool b = i == 34;                           //Boolean Variable

    std::cout << "INT: " << i << "\n";
    std::cout << "DOUBLE: " << d << "\n";
    std::cout << "FLOAT: " << f << "\n";
    std::cout << "CHAR: " << c << "\n";
    std::cout << "STRING: " << s.length() << "\n";
    std::cout << "BOOLEAN: " << b << "\n";
    return 0;
}