/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 05:07:29 by aatki             #+#    #+#             */
/*   Updated: 2024/01/09 01:28:12 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// int main()
// {
//     int tab[]={1,2,3};

//     iter(tab, 3, &function< int>);
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >

void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
int tab[] = { 0, 1, 2, 3, 4 };
Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );
  return 0;
}
