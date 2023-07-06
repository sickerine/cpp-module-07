/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:25:59 by mcharrad          #+#    #+#             */
/*   Updated: 2023/07/06 12:27:58 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T, typename U, typename V>
void iter(T *address, U length, V fnc)
{
    for (U i = 0; i < length; i++)
        fnc(address[i]);
}
