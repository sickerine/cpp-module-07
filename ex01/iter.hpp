/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:25:59 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/08 08:14:51 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T, typename U>
void iter(T *address, U length, void (*fnc)(const T &))
{
    for (U i = 0; i < length; i++)
        fnc(address[i]);
}
