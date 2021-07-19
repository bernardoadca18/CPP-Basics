#include <iostream>
#include <string>
#include <vector>

class MyClass
{
    private:
        //Variables
        std::vector<std::string> myStrings;

    public:
        MyClass();

        //Accessors
        inline const std::vector<std::string>& getMyStrings() const;

        //Modifiers


        //Functions
        void addToMyStrings(const std::string str);
        const std::string toString() const;
};

//MyClass function definitions
MyClass::MyClass()
{
    this->myStrings.push_back("String number 1!");
}

inline const std::vector<std::string>& MyClass::getMyStrings() const
{
    return this->myStrings;
}

void MyClass::addToMyStrings(const std::string str)
{
    this->myStrings.push_back(str);
}

const std::string MyClass::toString() const
{
    std::string str = "";
    
    for (size_t i = 0; i < this->myStrings.size(); i++)
    {
        str += std::to_string(i + 1) + ": " + this->myStrings.at(i) + '\n';
    }
    return str;
}

//Main
int main()
{
    MyClass obj;

    obj.addToMyStrings("String 2");

    for (size_t i = 0; i < 10; i++)
    {
        obj.addToMyStrings("Num " + std::to_string(i+1));
    }
    

    std::cout << obj.toString();
    std::cout << "String amount: " << obj.getMyStrings().size() << '\n';

    return 0;
}