/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:09:26 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/08 10:17:56 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define stupid(x) template <typename T> x Array<T>

stupid()::Array()
{
    array = 0;
    length = 0;
}

stupid()::~Array() {
    delete[] array;
}

stupid()::Array(unsigned int n)
{
    array = new T[n];
    length = n;
}

stupid()::Array(const Array & copy)
{
    array = 0;
    length = 0;
    *this = copy;
}

stupid(Array<T> &)::operator=(const Array<T> & copy)
{
    if (this == &copy)
        return *this;
    delete[] array;
    length = copy.length;
    array = new T[length];
    for (unsigned int i = 0; i < length; i++)
        array[i] = copy.array[i];
    return *this;
}

stupid(T &)::operator[](unsigned int idx)
{
    if (idx >= length)
        throw std::exception();
    return array[idx];
}

stupid(const T &)::operator[](unsigned int idx) const
{
    if (idx >= length)
        throw std::exception();
    return array[idx];
}

stupid(unsigned int)::size() const
{
    return length;
}



