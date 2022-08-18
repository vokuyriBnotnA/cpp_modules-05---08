#include "Span.hpp"

int main()
{
	{
		Span sp = Span(5);
	
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		int nl;
		Span sp = Span(10000);
		srand(time(0));
		for (int i = 0; i < 10000; i++){
			nl = rand();
			sp.addNumber(nl);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}