/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:23:10 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/24 17:03:01 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _nb(0) {
    std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(const int& nb) : _nb(nb << _bits) {
    std::cout << GREEN << "Int constructor called" << RESET << std::endl;
}

Fixed::Fixed(const float& nb) {
    std::cout << GREEN << "Float constructor called" << RESET << std::endl;
    this->_nb = roundf(nb * (1 << this->_bits));
}

Fixed::Fixed(const Fixed& other) : _nb(other._nb) {
    std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
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

int Fixed::getRawBits(void) const {
    return this->_nb;
}

void Fixed::setRawBits(int const raw) {
    this->_nb = raw;
}

int Fixed::toInt(void) const {
    return this->_nb >> this->_bits;
}

float Fixed::toFloat(void) const {
    return this->_nb / 256.0;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}