#include <iostream>
#include <cstdlib>
#include <string>

class Card
{
    private:
        std::string name;
        int value;

    public:
        Card(int value, std::string name)
        {
            this->value = value;
            this->name = name;
        }

        //Unary operator overloading
        const Card operator-()
        {
            Card temp(-this->value, this->name + "-");
            return temp;
        }

        //Binary operator overloading
        const Card operator+(const Card& card)
        {
            Card temp(this->value + card.value, this->name + " + " + card.name);
            return temp;
        }

        inline const int& getValue() const
        {
            return this->value;
        }

        inline const std::string& getName() const
        {
            return this->name;
        }

};

int main()
{
    Card c1(5, "Name");
    Card c2(6, "Other Name");

    Card c3 = (c1 + c2);

    int i = 20;

    std::cout << c1.getValue() << '\n';
    std::cout << c1.getName() << '\n' << '\n';
    std::cout << c2.getValue() << '\n';
    std::cout << c2.getName() << '\n' << '\n';
    std::cout << c3.getValue() << '\n';
    std::cout << c3.getName() << '\n' << '\n';

    return 0;
}