#include <iostream>
#include <string>
#include "Header Files\Dice.h"

class Person
{
    private:
        std::string name;
        int age;
        int id;

        //Static Variables
        static int ID;

    public:
        Person(std::string = "EMPTY", int age = 0)
        {
            this->name = name;
            this->age = age;

            Person::ID++;
            this->id = Person::ID;
        }

        ~Person() {};

        //Accessors

        //Functions

        //Static Functions
        int getId()
        {
            return this->id;
        }

        static int GetID();
        //{
        //    return Person::ID;
        //}
};

int Person::GetID()
{
    return Person::ID;
}

int Person::ID = 0;

static void print(int i)
{
    std::cout << "Hello World" << i << '\n';
}

static void print(char c)
{
    std::cout << "Hello World" << c << '\n';
}

int main()
{
    for (size_t i = 0; i < 10; i++)
    {
        static int number = 20;
        number++;

        std::cout << number << '\n';
    }

    print(20);
    print('F');

    Person p1;
    std::cout << p1.getId() << '\n';

    Person p2;
    std::cout << p2.getId() << '\n';

    Person p3;
    std::cout << p3.getId() << '\n';

    Person p4;
    std::cout << p4.getId() << '\n';

    std::cout << Person::GetID() << '\n';

    return 0;
}