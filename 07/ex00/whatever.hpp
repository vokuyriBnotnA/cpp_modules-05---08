/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llawrenc <llawrenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:09:23 by llawrenc          #+#    #+#             */
/*   Updated: 2022/08/05 20:09:23 by llawrenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class Type>
void	swap(Type &a, Type &b){
	Type c;

	c = a;
	a = b;
	b = c;
};

template <class Type>
Type	min(Type a, Type b){
	return a < b ? a : b;
};

template <class Type>
Type	max(Type a, Type b){
	return a > b ? a : b;
};

#endif