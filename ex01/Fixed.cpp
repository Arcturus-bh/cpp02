/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:23:10 by aldalmas          #+#    #+#             */
/*   Updated: 2024/12/23 16:40:06 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) {
    std::cout << GREEN << "Default constructor called" << RESET << std::endl;
    this->_nb = 0.0;
}

Fixed::Fixed(const int& nb) {
    std::cout << CYAN << "Int constructor called" << RESET << std::endl;
    this->_nb = nb << this->_bits;
}

Fixed::Fixed(const float& nb) {
        std::cout << CYAN << "Float constructor called" << RESET << std::endl;
        this->_nb = roundf(nb * (1 << this->_bits));

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

int Fixed::toInt(void) const {
    return this->_nb << this->_bits;
}

float Fixed::toFloat(void) const {
    return ((float)this->_nb / (float)(1 << this->_bits));
}