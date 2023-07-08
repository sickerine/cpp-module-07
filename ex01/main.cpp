/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:28:08 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/08 08:27:58 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void printChar(const char &c)
{
    std::cout << c << std::endl;
}

void printstr(const std::string &str)
{
    std::cout << str << std::endl;
}

template <typename U>
void print(const U &ele)
{
    std::cout << ele << std::endl;
}

int main()
{
    char str[] = "string.";
    iter(str, sizeof(str), printChar);
    iter(str, sizeof(str), print);
    iter(str, sizeof(str), print<char>);

    std::string arr[] = {"Hello ", "World ", "!!"};
    iter(arr, 3, printstr);
    iter(arr, 3, print);
    iter(arr, 3, print<std::string>);

    int b[] = {0,6753,2,83,2,8,32,8};
    iter(b, sizeof(b)/sizeof(int), print<int>);
}
