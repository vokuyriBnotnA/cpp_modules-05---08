/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llawrenc <llawrenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:53:04 by llawrenc          #+#    #+#             */
/*   Updated: 2022/08/05 21:53:04 by llawrenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <exception>
# include <stdexcept>


template <class T>
class Array
{
public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(Array<T> const &instance);

	Array<T>	&operator = (Array<T> const &instance);
	T			&operator [] (unsigned i);

	unsigned int	size() const;

private:
	T				*_arr;
	unsigned int	_size;
};

template<class T>
std::ostream &operator << (std::ostream &out, const Array<T> &a);

# include "Array.tpp"
#endif