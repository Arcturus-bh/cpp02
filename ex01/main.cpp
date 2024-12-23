/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 14:55:26 by aldalmas          #+#    #+#             */
/*   Updated: 2024/12/23 16:36:39 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    //std::cout << "a is " << a << std::endl;
    //std::cout << "b is " << b << std::endl;
    //std::cout << "c is " << c << std::endl;
    //std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}