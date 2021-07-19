#pragma once

#include <string>

class Dice
{
    private:
        const int value;
        std::string color;

    public:
        Dice(const int value = 6, const std::string color = "White");
        ~Dice();

        //Accessors
        inline const int& getValue() const
        {
            return this->value;
        };

        inline const std::string& getColor() const
        {
            return this->color;
        };
        
        //Modifiers
        inline void setColor(const std::string color)
        {
            this->color = color;
        }

        //Functions
        const int toss() const;
};

Dice::Dice(const int value, const std::string color):value(value)
{
    this->color = color;
}

Dice::~Dice(){}

//Functions
const int Dice::toss() const
{
    return rand() % this->value + 1;
}