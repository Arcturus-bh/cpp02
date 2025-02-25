/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:23:10 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/24 16:02:33 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _nb(0) {
    std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
    this->_nb = other.getRawBits();
}

Fixed::~Fixed(void) {
    std::cout << RED << "Destructor called" << RESET << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << YELLOW << "Copy assignement operator called" << RESET << std::endl;
    if (this != &other)
        this->_nb = other.getRawBits();
    return *this;
}

int  Fixed::getRawBits(void) const {
    std::cout << YELLOW << "getRawBits member function called" << RESET << std::endl;
    return this->_nb;
}

void Fixed::setRawBits(int const raw) {
    std::cout << YELLOW << "setRawBits member function called" << RESET << std::endl;
    this->_nb = raw;
}