//
// Created by Aren Windham on 4/30/19.
//

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// constructors

Fixed::Fixed( const int n ) {
    std::cout << "Constructor function called" << std::endl;
    _value = n<<_bits;
}

Fixed::Fixed(const float n) {
    std::cout << "constructor function called" << std::endl;
    _value = std::roundf(n * (1 << _bits));
}

Fixed::Fixed( void )  {
    std::cout << "Default constructor function called" << std::endl;
    _value = 0;
}

Fixed::Fixed(Fixed const & cp) {
    std::cout << "Copy constructor called" << std::endl;
    *this = cp;
}

Fixed::~Fixed( void )  {
    std::cout << "Destructor function called" << std::endl;
}

int		Fixed::getRawBits( void ) const {
    std::cout << "getRawBits function called" << std::endl;
    return (_value);
}

// operators

Fixed	&Fixed::operator=( Fixed const &cp) {
    std::cout << "Assignment operator called" << std::endl;
    this->_value = cp.getRawBits();
    return (*this);
}

bool Fixed::operator>(Fixed const &n) const {
    return n.toFloat() > this->toFloat();
}

bool Fixed::operator<(Fixed const &n) const {
    return n.toFloat() < this->toFloat();
}

bool Fixed::operator>=(Fixed const &n) const {
    return n.toFloat() >= this->toFloat();
}

bool Fixed::operator<=(Fixed const &n) const {
    return n.toFloat() <= this->toFloat();
}

bool Fixed::operator==(Fixed const &n) const {
    return n.toFloat() == this->toFloat();
}

bool Fixed::operator!=(Fixed const &n) const {
    return n.toFloat() != this->toFloat();
}

Fixed Fixed::operator+(Fixed const &n) const {
    return n.getRawBits() + getRawBits();
}

Fixed	Fixed::operator++( int ) {
    float n = this->toFloat();
    this->_value++;
    return (Fixed(n));
}

Fixed	Fixed::operator++( void ) {
    ++this->_value;
    return (*this);
}

Fixed	Fixed::operator--( int ) {
    float n = this->toFloat();
    this->_value--;
    return (Fixed(n));
}

Fixed	Fixed::operator--( void ) {
    --this->_value;
    return (*this);
}

Fixed Fixed::operator-(Fixed const &n) const {
    return n.getRawBits() - getRawBits();
}

Fixed Fixed::operator*(Fixed const &n) const {
    return n.getRawBits() * getRawBits();
}

Fixed Fixed::operator/(Fixed const &n) const {
    return n.getRawBits() / getRawBits();
}

std::ostream &operator<<(std::ostream &o, Fixed const &f) {
    o << f.toFloat();
    return o;
}

void	Fixed::setRawBits( int const raw ) {
    std::cout << "Setting to raw value " << raw << std::endl;
    this->_value = raw;
}

// functions

float Fixed::toFloat() const {
    return ((double)_value / (1 << _bits));
}

int Fixed::toInt(void) const {
    return this->_value>>this->_bits;
}

Fixed	&Fixed::max( Fixed &a, Fixed &b ) {
    return (a > b ? a : b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b) {
    return (a > b ? a : b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
    return (a < b ? a : b);
}

Fixed	const &Fixed::min(Fixed const &a, Fixed const &b) {
    return (a < b ? a : b);
}