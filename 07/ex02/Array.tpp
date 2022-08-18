/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llawrenc <llawrenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:53:03 by llawrenc          #+#    #+#             */
/*   Updated: 2022/08/05 21:53:03 by llawrenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <exception>
#include <stdexcept>

template<class T>
Array<T>::Array(void): _arr(0), _size(0) {}

template<class T>
Array<T>::Array(unsigned int n): _arr(new T[n]), _size(n) {}

template<class T>
Array<T>::~Array() { delete [] _arr; }

template<class T>
Array<T>::Array(Array const &instance){
	_size = instance._size;
	_arr = new T[_size];
	for (unsigned i = 0; i < _size; i++)
		_arr[i] = instance._arr[i];
}

template<class T>
Array<T>	&Array<T>::operator = (Array const &instance){
	if (*this != instance)
	{
		delete [] _arr;
		_size = instance.size();
		_arr = new T[_size];
		for (unsigned i = 0; i < _size; i++)
			_arr[i] = instance._arr[i];
	}
	return (*this);
}

template<class T>
unsigned int	Array<T>::size(void) const { return _size; }


template<class T>
T		&Array<T>::operator [] (unsigned i){
	if  (i < 0 || i >= _size)
		throw std::out_of_range("Wrong index of array");
	return _arr[i];
}

template<class T>
std::ostream &operator << (std::ostream &out, const Array<T> &a){
	out << a.size();

	return out;
}