#include <iostream>
#include <math.h>

int main()
{
    const int arraySize = 5;
    int myArray[arraySize];

    //[00][01][02][03][04]
    //[10][11][12][13][14]
    //[20][21][22][23][24]
    //[30][31][32][33][34]
    //[40][41][42][43][44]

    int my2dArray[arraySize][arraySize];

    for (size_t i = 0; i < arraySize; i++)
    {
        for (size_t j = 0; j < arraySize; j++)
        {
            if(((i == 0) && (j == 0)) || ((i == 0) && (j == 4)) || ((i == 4) && (j == 0)) || ((i == 4) && (j == 4)))
            {
                my2dArray[i][j] = 10;
            }
            else
            {
                my2dArray[i][j] = 0;
            }
            //if((i + j) <= 3)
            //{
            //    my2dArray[i][j] = 50 * pow(i, j);
            //}
            //else
            //{
            //    my2dArray[i][j] = -50 * pow(j, i);
            //}
        }
        
    }

    //my2dArray[0][0] = 10;
    //my2dArray[0][4] = 10;
    //my2dArray[4][0] = 10;
    //my2dArray[4][4] = 10;

    for (size_t i = 0; i < arraySize; i++)
    {
        for (size_t j = 0; j < arraySize; j++)
        {
            std::cout << my2dArray[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}