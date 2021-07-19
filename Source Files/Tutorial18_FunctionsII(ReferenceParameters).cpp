#include <iostream>
#include <string>

//REFERENCE PARAMETERS
//PASS BY VALUE
//PASS BY REFERENCE

void changeNameOfCharacter_VAL(std::string name)
{
    /*
        Function will change the name (BY VALUE)
    */

    name = "Name";
}

void incrementEXP(int &xp, int level)
{
    xp += 20 + level*2 - 3;
}

void changeNameOfCharacter_REF(std::string &name_to_change, std::string name)
{
    /*
        Function will change the name (BY VALUE)
    */
    name_to_change = name;
}

int main()
{
    int xp = 0;
    int level = 1;

    std::cout << xp << '\n';
    incrementEXP(xp, level);
    std::cout << xp << '\n';

    std::string characterName = "CName";
    std::string myName = "Name";

    //changeNameOfCharacter_VAL(characterName);
    changeNameOfCharacter_REF(characterName, "New Name");
    changeNameOfCharacter_REF(myName, characterName);

    std::cout << characterName << '\n';
    std::cout << myName << '\n';

    return 0;
}