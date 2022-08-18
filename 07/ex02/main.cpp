/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llawrenc <llawrenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:52:57 by llawrenc          #+#    #+#             */
/*   Updated: 2022/08/05 21:52:57 by llawrenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <stdexcept>


int main()
{
	Array <int>tmp(20);
	Array <int>empty;

	std::cout << "------Int Array-----\n";
	std::cout << "Operator overloading insertion\n";
	std::cout << "Empty array: " << empty << std::endl;
	std::cout << "Non empty array: " << tmp << std::endl;

	std::cout << "\nOperator []:\n";
	for(unsigned i = 0; i < tmp.size(); i++)
	{
		tmp[i] = i;
		std::cout << tmp[i] << std::endl;
	}

	std::cout << "------Deep copy-----\n";
	Array <int>copy(tmp);
	for(unsigned i = 0; i < copy.size(); i++)
		copy[i] = i;
	for(unsigned i = 0; i < copy.size(); i++)
	{
		copy[i] = i;
		std::cout << copy[i] << std::endl;
	}

	std::cout << "-----Wrong index-----\n";
	try
	{
		copy[-1];
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		copy[20];
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}