#include <iostream>
#include <string>
#include <cstdlib>

class Car
{
    private:
    std::string name;
    int *horsePower;

    public:
        Car(std::string name, int horsepower);
        Car(const Car& obj);
        ~Car();

        const std::string& getName() const;
        const int& getHorsePower() const;
};

Car::Car(std::string name, int horsepower)
{
    this->name = name;
    this->horsePower = new int(*horsePower);
}

Car::Car(const Car& obj)
{
    this->name = obj.name;
    this->horsePower = new int(*obj.horsePower);
}

Car::~Car()
{
    delete this->horsePower;
}

const std::string& Car::getName() const
{
    return this->name;
}

const int& Car::getHorsePower() const
{
    return *this->horsePower;
}

int main()
{
    Car car1("Audi A4", 1);
    Car car2(car1);         //Copy Constructor
    //Car car2 = car1;      //Copy constructor
    //car2 = car1;          //Assignment Operator

    std::cout << car1.getName() << '\n';
    std::cout << car1.getHorsePower() << '\n';
    std::cout << car2.getName() << '\n';
    std::cout << car2.getHorsePower() << '\n';

    return 0;
}
