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

        //Operators
        void operator = (const Car& obj); //Assignment operator


        //Getters
        const std::string& getName() const;
        const int& getHorsePower() const;
};

Car::Car(std::string name, int horsepower)
{
    this->name = name;
    this->horsePower = new int(horsepower);
}

Car::Car(const Car& obj)
{
    this->name = obj.name;
    this->horsePower = new int(*obj.horsePower);

    std::cout << "Copy constructor used!" << '\n';
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

void Car::operator=(const Car & obj)
{
    if(this != &obj)    //Is not the same object
    {
        //Delete old data
        delete this->horsePower;

        //Copy over new data
        this->name = name;
        //this->horsePower = horsePower; //Shallow Copy(Wrong)
        this->horsePower = new int(*horsePower); //Deep Copy

        std::cout << "Overloaded assignment operator used!" << '\n';
    }
}

int main()
{
    Car car1("Audi A4", 2000);
    //Car car2(car1);         //Copy Constructor
    Car car2 = car1;      //Copy constructor
    //car2 = car1;          //Assignment Operator
    Car car3("ToyotaCH-R", 50000);

    std::cout << car1.getName() << '\n';
    std::cout << car1.getHorsePower() << '\n';

    std::cout << car2.getName() << '\n';
    std::cout << car2.getHorsePower() << '\n';

    std::cout << car3.getName() << '\n';
    std::cout << car3.getHorsePower() << '\n';

    return 0;
}
