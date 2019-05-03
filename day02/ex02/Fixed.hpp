//
// Created by Aren Windham on 4/30/19.
//

#ifndef PISCINE_CPP_FIXED_HPP
#define PISCINE_CPP_FIXED_HPP

#include <iostream>

class Fixed {
  public:
    Fixed(void);
    Fixed(Fixed const & cp);
    Fixed(const int n);
    Fixed(const float n);
    ~Fixed(void);
    Fixed&  operator=( Fixed const &cp);

    bool    operator>(Fixed const &n) const;
    bool    operator<(Fixed const &n) const;
    bool    operator>=(Fixed const &n) const;
    bool    operator<=(Fixed const &n) const;
    bool    operator==(Fixed const &n) const;
    bool    operator!=(Fixed const &n) const;
    Fixed   operator+(Fixed const &n) const;
    Fixed   operator++(void);
    Fixed   operator++(int);
    Fixed   operator--(void);
    Fixed   operator--(int);
    Fixed   operator-(Fixed const &n) const;
    Fixed   operator*(Fixed const &n) const;
    Fixed   operator/(Fixed const &n) const;


    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat(void) const;
    int     toInt(void) const;

    static  Fixed &max(Fixed &a, Fixed &b);
    static  Fixed const &max(Fixed const &a, Fixed const &b);
    static  Fixed &min(Fixed &a, Fixed &b);
    static  Fixed const &min(Fixed const &a, Fixed const &b);

  private:
    int		_value;
    const static int _bits = 8;
    const static int _lowMask = 0xFF;
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);

#endif //PISCINE_CPP_FIXED_HPP
