//
// Created by Aren Windham on 4/30/19.
//

#include "Fixed.h"
#include <iostream>

Fixed::Fixed( int n )
{
    std::cout << "Constructor function called" << std::endl;
    _value = n;
}
Fixed::Fixed( void )
{
    std::cout << "Default constructor function called" << std::endl;
    _value = 0;
}

Fixed::Fixed( Fixed const & cp)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cp;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor function called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits function called" << std::endl;
    return (_value);
}

Fixed	&Fixed::operator=( Fixed const &cp)
{
    std::cout << "Assignment operator called" << std::endl;
    this->_value = cp.getRawBits();
    return (*this);
}

void	Fixed::setRawBits( int const raw )
{
    std::cout << "Setting to raw value " << raw << std::endl;
    this->_value = raw;
}