#include<iostream>
#include<ctime>

class Dice
{
    private:
        const int value;

    public:
        Dice(int value);    //Constructor
        virtual ~Dice();    //Destructor

        //Accessors
        const int& getValue() const;

        //Functions
        const int toss() const;

};

int main()
{
    srand(time(static_cast<unsigned>(0)));

    Dice d6(6);
    Dice d12(12);
    Dice d20(20);

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << i+1 << ": " << "D6: " << d6.toss() << '\n';
        std::cout << i+1 << ": " << "D12: " << d12.toss() << '\n';
        std::cout << i+1 << ": " << "D20: " << d20.toss() << '\n';
    }
    
    return 0;
}

//Class Dice
Dice::Dice(int value):value(value) //Initializer list for class constant member variables and references.
{
    
}

Dice::~Dice(){};

const int& Dice::getValue() const
{
    return this->value;
}

const int Dice::toss() const
{
    return rand()%this->value + 1;
}