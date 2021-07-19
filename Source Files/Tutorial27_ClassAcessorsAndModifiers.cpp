#include <iostream>
#include <string>
#include <vector>
#include <sstream>

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
            //std::cout << "Default constructor" << '\n';

            this->name = "none";
            this->age = -1;
            this->male = false;
            this->address = "none";
            this->profession = "none";
        }

        Person(std::string name, int age, bool male, std::string address, std::string profession)
        {
            //std::cout << "Specialized constructor" << '\n';

            this->name = name;
            this->age = age;
            this->male = male;
            this->address = address;
            this->profession = profession;
        }

        ~Person()
        {
            //std::cout << "Destructor" << '\n';
        }

        //Accessors (Getters)
        inline const std::string& getName() const 
        {
            return this->name;
        }

        inline const int& getAge() const
        {
            return this->age;
        }

        inline const bool& isMale() const
        {
            return this->male;
        }

        inline const std::string& getAddress() const
        {
            return this->address;
        }

        inline const std::string getProfession() const
        {
            return this->profession;
        }

        //Modifiers (Setters)
        inline void setName(const std::string& name)
        {
            this->name = name;
        }

        inline void setAge(const int& age)
        {
            this->age = age;
        }

        inline void setMale(const bool& male)
        {
            this->male = male;
        }

        inline void setAddress(const std::string& address)
        {
            this->address = address;
        }

        inline void setProfession(const std::string& profession)
        {
            this->profession = profession;
        }

        //Functions
        const std::string toString() const
        {
            std::string finalString = "";

            finalString =   "Name: " + this->name +
                            "\nAge: " + std::to_string(this->age) +
                            "\nMale: " + std::to_string(this->male) +
                            "\nAddress: " + this->address +
                            "\nProfession: " + this->profession + '\n';
            return finalString;
        }
};

int main()
{
    Person p1("Name", 18, true, "Somewhere", "SomeJob");
    Person p2;
    std::cout << p1.getName() << '\n';
    p1.setName("Name2");
    std::cout << p1.getName() << '\n';
    std::cout << p2.getName() << '\n';

    std::cout << "-----------------\n";

    std::cout << p1.toString() << '\n';
    //std::cout << "The end of the program" << '\n';

    return 0;
}
