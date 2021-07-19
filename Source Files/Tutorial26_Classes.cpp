#include <iostream>
#include <string>
#include <vector>

/*
Classes - class(Keyword) class Name
{
    private:
    Private Members
    Private Functions

    public:
    Constructor
    Destructor
    Public Members
    Public Functions
*/

class Person
{
    private:
        //Variables
        std::string name;
        int age;
        bool male;
        std::string address;
        std::string profession;

        //Functions

    public:
        //Constructors and Destructors
        Person()
        {
            std::cout << "Default constructor" << '\n';

            this->name = "none";
            this->age = -1;
            this->male = false;
            this->address = "none";
            this->profession = "none";
        }

        Person(std::string name, int age, bool male, std::string address, std::string profession)
        {
            std::cout << "Specialized constructor" << '\n';

            this->name = name;
            this->age = age;
            this->male = male;
            this->address = address;
            this->profession = profession;
        }

        ~Person()
        {
            std::cout << "Destructor" << '\n';
        }

        //Accessors
        std::string getname()
        {
            return this->name;
        }

        //Modifier

        //Functions
};

int main()
{
    Person p1("Some Name", 20, false, "Somewhere", "Some Job");
    Person p2;
    std::cout << p1.getname() << '\n';
    std::cout << p2.getname() << '\n';
    std::cout << "The end of the program" << '\n';

    return 0;
}

