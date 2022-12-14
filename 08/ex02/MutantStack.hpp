#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template < typename T >
class MutantStack : public std::stack<T> {

public:
	MutantStack( void ) {}
	~MutantStack( void ) {}
	MutantStack( MutantStack const & ref ) : std::stack<T>(ref)
	{
		return;
	}
	typedef T * iterator;

	iterator	begin()
	{
		iterator	it;
		std::stack<T>	st;
		while (!this->empty())
		{
			st.push(this->top());
			this->pop();
		}
		this->push(st.top());
		it = &(this->top());
		st.pop();
		while (!st.empty())
		{
			this->push(st.top());
			st.pop();
		}
		return(it);
	}
	iterator	end()
	{
		return(&this->top() + 1);
	}

private:

};

#endif