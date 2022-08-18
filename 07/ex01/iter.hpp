/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llawrenc <llawrenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:37:08 by llawrenc          #+#    #+#             */
/*   Updated: 2022/08/05 21:37:08 by llawrenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<class A>
void	print(A val)
{
	std::cout << val << std::endl;
};

template<class A, class S>
void	iter(A array[], S length, void (*func)(A &))
{
	for (S i = 0; i < length; i++)
		func(array[i]);
};

#endif