#include <iostream>
#include <ctime>
#include <vector>

int main()
{
    //Use Release Mode in Visual Studio
    //g++ .\filename.cpp -o .\filename.exe -O2

    //Initialize
    std::vector<int> intArr(1000000000, 1);
    int sum = 0;

    //Optimization of loops
    int start_t = clock();

    //Normal Loop (avg : 0.06 ms)
    for (size_t i = 0; i < intArr.size(); i++)
    {
        sum += intArr.at(i);
    }

    //C++11 Foreach Loop (0.001 ms)
    //for(auto &i : intArr)
    //{
    //    sum += intArr[i];
    //}

    //Iterator range Loop (0.003 ms)
    //const auto end = cend(intArr); //Iterator caching
    //const std::vector<int>::const_iterator end = cend(intArr); //Iterator caching
    //for (std::vector<int>::const_iterator it = cbegin(intArr); it != end; ++it)
    //{
    //    sum += *it;
    //}
    

    int end_t = clock();

    std::cout << "Time: " << (end_t - start_t)/double(CLOCKS_PER_SEC) << '\n';
    std::cout << "Sum: " << sum << '\n';

    return 0;
}
