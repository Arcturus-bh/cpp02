/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 14:55:26 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/25 08:53:42 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    {
        Fixed a(13);
        Fixed b(3);

        std::cout << YELLOW << "MY MAIN" << RESET << std::endl;
        std::cout << YELLOW << "\nCALCULS" << RESET << std::endl;
        //
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
        //
        std::cout << "a + b = ";
        std::cout << a + b << std::endl;
        //
        std::cout << "a - b = ";
        std::cout << a - b << std::endl;
        //
        std::cout << "a * b = ";
        std::cout << a * b << std::endl;
        //   
        std::cout << "a / b = ";
        std::cout << a / 0 << std::endl;
        //
        std::cout << "\nvalue before a++: " << a++ << std::endl;
        std::cout << "value after: " << a << std::endl << std::endl;
        //
        std::cout << "value before ++a: " << a << std::endl;
        std::cout << "value after: " << ++a << std::endl << std::endl;
        //
        std::cout << "value before a--: " << a-- << std::endl;
        std::cout << "value after: " << a << std::endl << std::endl;
        //
        std::cout << "value before --a: " << a << std::endl;
        std::cout << "value after: " << --a << std::endl << std::endl;

        /*-----------------------------------------*/

        std::cout << YELLOW << "\nCOMPARAISONS (0: false, 1: true)" << RESET << std::endl;
        std::cout << "a == b = ";
        std::cout << (a == b) << std::endl;
        //
        std::cout << "a != b = ";
        std::cout << (a != b) << std::endl;
        //
        std::cout << "a < b  = ";
        std::cout << (a < b) << std::endl;
        //
        std::cout << "a <= b = ";
        std::cout << (a <= b) << std::endl;
        //
        std::cout << "a > b  = ";
        std::cout << (a > b) << std::endl;
        //
        std::cout << "a >= b = ";
        std::cout << (a >= b) << std::endl;

        std::cout << "min(a, b) : ";
        std::cout << Fixed::min( a, b ) << std::endl;

        std::cout << "max(a, b) : ";
        std::cout << Fixed::max( a, b ) << std::endl;
    }
    {
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

        std::cout << YELLOW << "\nMAIN GAVE BY THE SUBJECT" << RESET << std::endl;
        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl;
        return 0;
    }
}