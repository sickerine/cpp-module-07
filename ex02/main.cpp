#include <iostream>
#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 750

int main(int, char **)
{
    {
        int *a = new int();
        std::cout << *a << std::endl;
        int len = 5;
        Array<int> numbers(len);
        for (int i = 0; i < len; i++)
        {
            std::cout << numbers[i];
        }
        std::cout << std::endl;
    }

    {
        Array<const std::string> test(3);
    }

    {
        Array<std::string> test(3);
        test[0] = "aaa";
        test[1] = "bbbbb";
        test[2] = "cccccc";
        try
        {
            test[3] = "ddddddd";
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "length: " << test.size() << std::endl;
        std::cout << test[0] << test[1] << test[2] << std::endl;

        const Array<std::string> teeeest = test;
        std::cout << "TEEEEEEEST: " << teeeest[1] << std::endl;
        // teeeest[1] = "L";
        std::cout << "TEEEEEEEST: " << teeeest[1] << std::endl;
    }

    Array<int> numbers(MAX_VAL);
    int *mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    // SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete[] mirror; //
    return 0;
}