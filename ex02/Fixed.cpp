/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:23:10 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/24 15:37:45 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _nb(0) {}

Fixed::Fixed(const int nb) : _nb(nb << _bits) {}

Fixed::Fixed(const float nb) {
    this->_nb = roundf(nb * (1 << this->_bits));
}

Fixed::Fixed(const Fixed& other) : _nb(other._nb) {}

Fixed::~Fixed(void) {}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other)
        this->_nb = other._nb;
    return *this;
}

Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->_nb + other._nb);
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->_nb - other._nb);
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result.setRawBits((this->_nb * other._nb) >> this->_bits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    if (other._nb == 0) {
        std::cerr << RED << "ERROR : divide by 0 ... NICE TRY !" << RESET << std::endl;
        return Fixed(0);
    }
    Fixed result;
    result.setRawBits((this->_nb << this->_bits) / other._nb);
    return result;
}

Fixed& Fixed::operator++(void) {
    this->_nb += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    this->_nb += 1;
    return temp;
}

Fixed& Fixed::operator--(void) {
    this->_nb -= 1;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    this->_nb -= 1;
    return temp;
}

bool Fixed::operator<(const Fixed& other) const {
    return this->_nb < other._nb;
}

bool Fixed::operator>(const Fixed& other) const {
    return this->_nb > other._nb;
}

bool Fixed::operator>=(const Fixed& other) const {
    return this->_nb >= other._nb;
}

bool Fixed::operator<=(const Fixed& other) const {
    return this->_nb <= other._nb;
}

bool Fixed::operator==(const Fixed& other) const {
    return this->_nb == other._nb;
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->_nb != other._nb;
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

Fixed& Fixed::min(Fixed& one, Fixed& two) {
    if (one < two || one == two)
        return one;
    return two;
}

const Fixed& Fixed::min(const Fixed& one, const Fixed& two) {
    if (one < two || one == two)
        return one;
    return two;
}

Fixed& Fixed::max(Fixed& one, Fixed& two) {
    if (one > two || one == two)
        return one;
    return two;
}

const Fixed& Fixed::max(const Fixed& one, const Fixed& two) {
    if (one > two || one == two)
        return one;
    return two;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}