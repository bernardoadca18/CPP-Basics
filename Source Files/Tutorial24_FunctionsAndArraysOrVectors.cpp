#include <iostream>
#include <vector>
#include <cmath>

void printArray(const int& size, const int arr[]);
void replaceArray(const int& size, int arr[], const int& value);

void printVector(const std::vector<int>& vec);
void replaceVector(std::vector<int>& vec, const int& value);

int main()
{
    const int arraySize = 10;
    int arr[arraySize];
    std::vector<int> myVec;

    for (size_t i = 0; i < arraySize; i++)
    {
        arr[i] = pow(i, i);
    }

    for (size_t i = 0; i < arraySize; i++)
    {
        myVec.push_back(pow(i,i));
    }

    std::cout << "Arrays" << '\n';
    printArray(arraySize, arr);
    replaceArray(arraySize, arr, 702);
    printArray(arraySize, arr);

    std::cout << "Vectors" << '\n';
    printVector(myVec);
    replaceVector(myVec, 12);
    printVector(myVec);


    return 0;
}

void printArray(const int& size, const int arr[])
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << '\n';
    }
    std::cout << '\n';
}

void replaceArray(const int& size, int arr[], const int& value)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = value;
    }
}

void printVector(const std::vector<int>& vec)
{
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << '\n';
    }
    std::cout << '\n';
}

void replaceVector(std::vector<int>& vec, const int& value)
{
    for (size_t i = 0; i < vec.size(); i++)
    {
        vec[i] = value;
    }

}
