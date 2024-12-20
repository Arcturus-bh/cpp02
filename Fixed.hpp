/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 14:57:29 by aldalmas          #+#    #+#             */
/*   Updated: 2024/12/20 16:31:37 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef "FIXED_HPP"
#define "FIXED_HPP"

#include <iostream>
 
 class Fixed {
    public:
        Fixed(void);
        Fixed(const Fixed&);
        ~Fixed(void);
        Fixed &operator=(const Fixed&);
}

#endif