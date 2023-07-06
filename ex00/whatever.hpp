/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:18:47 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/06 12:24:31 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T store = a;
    a = b;
    b = store;
}

template <typename T>
T min(const T &a, const T &b)
{
    return a < b ? a : b;
}

template <typename T>
T max(const T &a, const T &b)
{
    return a > b ? a : b;
}

