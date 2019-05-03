//
// Created by Aren Windham on 4/30/19.
//

#ifndef CPP_PISCINE_FIXED_H
#define CPP_PISCINE_FIXED_H


class Fixed {
  public:
    Fixed( int n );
    Fixed( void );
    Fixed( Fixed const & cp);
    ~Fixed( void );
    Fixed& operator=( Fixed const &cp);

    int		getRawBits( void ) const;
    void	setRawBits( int const raw );

  private:
    int		_value;
    const static int _bits = 8;

};


#endif //CPPLION_PISCINE_FIXED_H
