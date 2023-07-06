/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:28:08 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/06 12:30:11 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void printChar(char c)
{
    std::cout << c << std::endl;
}

int main()
{
    char str[] = "string.";
    iter(str, sizeof(str), printChar);
}