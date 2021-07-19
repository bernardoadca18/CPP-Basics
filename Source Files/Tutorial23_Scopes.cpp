#include <iostream>

//Global Scope
int globalInt1 = 10;

void func(int);

int main()
{
    //Main Scope

    int mainInt1 = 100;

    globalInt1 = 20;

    if(globalInt1 == 20)
    {
        globalInt1 = 30;
        mainInt1 = 200;

        if(mainInt1 == 200)
        {
            int ifInt1 = 300;
        }
    }

    return 0;
}

void func(int globalInt1)
{
    const int lel = 20;
    globalInt1 = 20;
}