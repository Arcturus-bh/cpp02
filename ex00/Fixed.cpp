/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:23:10 by aldalmas          #+#    #+#             */
/*   Updated: 2024/12/22 18:40:35 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << GREEN << "Default constructor called" << RESET << std::endl;
    this->_nb = 0;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
    this->setRawBits(other.getRawBits());
}

Fixed::~Fixed(void) {
    std::cout << RED << "Destructor called" << RESET << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other)
        this->setRawBits(other.getRawBits());
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << GREEN << "getRawBits member function called" << RESET << std::endl;
    return this->_nb;
}

void Fixed::setRawBits(int const raw) {
    std::cout << GREEN << "setRawBits member function called" << RESET << std::endl;
    this->_nb = raw;
}

const int Fixed::_bits = 8;
