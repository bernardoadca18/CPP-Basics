#include <iostream>
#include <fstream>
#include <string>

int main()
{
    const char fileName[] = "Files/myFile.txt";
    int lines;
    std::ifstream inFile(fileName);
    std::string line = "";
    char c = ' ';
    int numberOfAs = 0;

    std::string name = "";
    int age = 0;
    std::string bloodType = "";
    std::string street = "";
    std::string catName = "";
    double height = 0.0;

    if(inFile.is_open())
    {
        while (!inFile.eof())
        {
            std::getline(inFile, name);
            inFile >> age;
            inFile.ignore();

            std::getline(inFile, bloodType);
            std::getline(inFile, street);
            std::getline(inFile, catName);
            inFile >> height;
            inFile.ignore();

            std::cout   << name << "\n"
                        << age << "\n"
                        << bloodType  << "\n"
                        << street  << "\n"
                        << catName << "\n"
                        << height << "\n" << "\n";
        }
        //std::cout << "\n" << numberOfAs << "\n";
    }
    else
    {
        std::cout << "Could not open file: " << fileName << "\n";
    }

    inFile.close();

    return 0;
}