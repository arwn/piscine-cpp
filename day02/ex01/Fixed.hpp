//
// Created by Aren Windham on 4/30/19.
//

#ifndef PISCINE_CPP_FIXED_HPP
#define PISCINE_CPP_FIXED_HPP

#include <iostream>

class Fixed {
public:
    Fixed( void );
    Fixed( Fixed const & cp);
    Fixed(const int n);
    Fixed(const float n);
    ~Fixed( void );
    Fixed& operator=( Fixed const &cp);

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat(void) const;
    int     toInt(void) const;

private:
    int		_value;
    const static int _bits = 8;
    const static int _lowMask = 0xFF;
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);

#endif //PISCINE_CPP_FIXED_HPP
