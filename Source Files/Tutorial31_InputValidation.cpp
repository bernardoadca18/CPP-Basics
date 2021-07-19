#include <iostream>
#include <iomanip>

template <typename T>

void getChoice(T& choice)
{
    std::cout << "Enter choice: " << '\n';
    std::cin >> std::setw(1) >> choice;

    //Error check
    while (std::cin.good() == false)
    {
        //Report problem
        std::cout << "ERROR: Faulty Input! Try again." << '\n';

        //Clear stream
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        //Get Input again
        std::cout << "Enter choice: " << '\n';
        std::cin >> std::setw(1) >> choice;
    }
    
    //Clear stream
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
}

int main()
{
    int choice = '-1';

    getChoice(choice);

    while (choice > 0)
    {
        switch (choice)
        {
            case 1:
            {
                std::cout << "Option 1 (One)" << '\n';
                break;
            }
            case 2:
            {
                std::cout << "Option 2 (Two)" << '\n';
                break;
            }
            case 3:
            {
                std::cout << "Option 3 (Three)" << '\n';
                break;
            }

            default:
                std::cout << "No Cap" << '\n';
                break;
        }

        getChoice(choice);
    }
    
    std::cout << "Quiting..." << '\n';

    return 0;
}

