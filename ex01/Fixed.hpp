/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 14:57:29 by aldalmas          #+#    #+#             */
/*   Updated: 2025/02/24 17:00:00 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

 # define RED    "\x1b[31m"
# define GREEN   "\x1b[32m"
# define CYAN    "\x1b[36m"
# define YELLOW  "\x1b[33m"
# define RESET   "\x1b[0m"

 class Fixed {
    private:
        int                 _nb;
        static const int    _bits = 8;

    public:
        Fixed(void);
        Fixed(const int& nb);
        Fixed(const float& nb);
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        ~Fixed(void);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif