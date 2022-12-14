/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llawrenc <llawrenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:09:22 by llawrenc          #+#    #+#             */
/*   Updated: 2022/08/05 20:09:22 by llawrenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

class Awesome
{

public:
	Awesome( void ): _n(0) {}
	Awesome( int n ): _n(n) {}
	Awesome & operator == ( Awesome & a )
	{
		_n = a._n;
		return *this;
	}
	bool	operator == (Awesome const & rhs) const
	{
		return (this->_n == rhs._n);
	}
	bool	operator != (Awesome const & rhs) const
	{
		return (this->_n != rhs._n);
	}
	bool	operator > (Awesome const & rhs) const
	{
		return (this->_n > rhs._n);
	}
	bool	operator < (Awesome const & rhs) const
	{
		return (this->_n < rhs._n);
	}
	bool	operator >= (Awesome const & rhs) const
	{
		return (this->_n >= rhs._n);
	}
	bool	operator <= (Awesome const & rhs) const
	{
		return (this->_n <= rhs._n);
	}
	int	get_n() const
	{
		return _n;
	}

private:
	int _n;
};

std::ostream & operator << (std::ostream &o, const Awesome &a)
{
	o << a.get_n();
	return o;
}

int main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	Awesome	e(2);
	Awesome	f(4);

	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	return 0;
}