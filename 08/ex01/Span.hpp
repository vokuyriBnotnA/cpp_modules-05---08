#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>

class Span{
	public:
		Span(unsigned int i);
		~Span();
		void addNumber(int i);
		int shortestSpan();
		int longestSpan();
	private:
		unsigned int N;
		unsigned int num;
		int *tm;
};

#endif