#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> myIntVec;

    myIntVec.push_back(87);
    myIntVec.push_back(123);
    myIntVec.push_back(233);
    myIntVec.push_back(789);
    myIntVec.push_back(546);

    //myIntVec.clear();
    int integerToRemove = 233;
    bool found = false;

    for (size_t i = 0; i < myIntVec.size() && found == false; i++)
    {
        if(myIntVec[i] == integerToRemove)
        {
            myIntVec.erase(myIntVec.begin() + i);
            found = true;
            std::cout << integerToRemove << " has been erased" << '\n';
        }
    }

    if(found == false)
    {
        std::cout << integerToRemove << " was not found" << '\n';
    }

    for (size_t i = 0; i < myIntVec.size(); i++)
    {
        std::cout << myIntVec[i] << " ";
    }

    std::cout << '\n';

    std::cout << "Size of the vector: " << myIntVec.size() << '\n';


    std::vector<std::string> myStringVec;
    myStringVec.push_back("String");
    myStringVec.push_back("New String");
    myStringVec.push_back("Other String");

    myStringVec.erase(myStringVec.begin());
    myStringVec.erase(myStringVec.end());

    for (size_t i = 0; i < myStringVec.size(); i++)
    {
        std::cout << myStringVec[i] << '\n';
    }

    std::cout << '\n';

    std::cout << "Size of the string vector: " << myStringVec.size() << '\n';
	
	system("PAUSE");
	
    return 0;
}