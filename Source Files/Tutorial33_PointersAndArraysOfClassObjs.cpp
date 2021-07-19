#include <iostream>
#include <string>
#include <sstream>
#include <ctime>

class Person
{
    private:
        std::string name;
        std::string age;

    public:
        Person(std::string name = "ANY", int age = 0)
        {
            this->name = name;
            this->age = age;
        }

        ~Person() {};

        //Functions
        const std::string toString() const
        {
            std::stringstream ss;

            ss  << "Name: " << this->name << '\n'
                << "Age: " << this->age << '\n';

            return ss.str();
        }
};

int main()
{
    srand(time(NULL));

    Person p1("Name", 18);
    Person p2("Name2", 18);

    Person* seat = nullptr;

    if(rand() % 2 > 0)
    {
        seat = &p1;
    }
    else
    {
        seat = &p2;
    }

    std::cout << seat->toString() << '\n';

//---------------------------------------------------

    Person* newPerson = new Person("Dude", 49);

    std::cout << newPerson->toString();

    delete newPerson;

//----------------------------------------------------

    Person **parr = new Person*[5];

    for (size_t i = 0; i < 5; i++)
    {
        parr[i] = new Person("SomeDude", i);
    }

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << parr[i]->toString();
    }
    

    for (size_t i = 0; i < 5; i++)
    {
        delete parr[i];
    }

    delete[] parr;

//----------------------------------------------------

    return 0;
}
