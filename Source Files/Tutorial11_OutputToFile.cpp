#include <iostream>
#include <fstream>
#include <string>

//IF FILE DOES NOT EXIST, IT WILL BE CREATED.
//TEXT OR BINARY.

int main()
{
    std::string name = "Name";
    int age = 25;
    std::string address = "Street 4";
    double height = 1.80;
    std::string catName = "CatName";
    std::string fileName = "myFile.txt";
    std::ofstream outFile;
    outFile.open(fileName.c_str());

    if(outFile.is_open())
    {
        int i = 0;
        while (i < 1)
        {
            outFile << "Name: "    << name      << "\n"
                    << "Age: "     << age       << "\n"
                    << "Address: " << address   << "\n"
                    << "Height: "  << height    << "\n"
                    << "CatName: " << catName   << "\n";
                i++;
                std::cout << "Writing..." << "\n" << i << "/" << 1 << "\n";
        }
        
    }
    outFile.close();

    return 0;
}