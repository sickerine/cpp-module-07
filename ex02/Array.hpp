/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:04:07 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/08 10:06:19 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>

template <typename T>
class Array
{
public:
    Array();
    ~Array();
    Array(unsigned int n);
    Array(const Array<T> &copy);
    Array<T> &operator=(const Array<T> &copy);
    T &operator[](unsigned int idx);
    const T &operator[](unsigned int idx) const;
    unsigned int size() const;
private:
    T *array;
    unsigned int length;
};

#include "Array.tpp"
