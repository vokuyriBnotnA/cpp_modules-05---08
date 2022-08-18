/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llawrenc <llawrenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:37:07 by llawrenc          #+#    #+#             */
/*   Updated: 2022/08/05 21:38:09 by llawrenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
class Awesome
{

		public:

		Awesome(): _n(42) {}

		int	getN() const { return this->_n; }

		private:

		int _n;

};

std::ostream &operator<<(std::ostream &out, const Awesome &instance)
{
	out << instance.getN();
	return (out);
}

int main()
{
	int	tab[] = {0, 1, 2, 3, 4};
	Awesome	tab2[5];
	std::string tab3[] = {"1", "2", "3", "4", "5",};

	iter<int, int>(tab, 5, print);
	iter<Awesome, int>(tab2, 5, print);
	iter<std::string, int>(tab3, 5, print);

	return 0;
}
