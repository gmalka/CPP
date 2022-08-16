#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
	private:
		int					store;
		static const int 	bit_number;
	public:
		Fixed();
		Fixed(const Fixed &taken);
		Fixed(const int value);
		Fixed(const float value);
		float toFloat(void) const;
		int toInt(void) const;
		void	operator= (const Fixed &fixed);
		bool	operator!= (const Fixed &c2);
		Fixed	operator+ (const Fixed &c2);
		Fixed	operator- (const Fixed &c2);
		Fixed	operator/ (const Fixed &c2);
		Fixed	operator* (const Fixed &c2);
		Fixed&	operator-- ();
		Fixed   operator-- (int);
		Fixed&	operator++ ();
		Fixed   operator++ (int);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		static Fixed &min(Fixed&, Fixed&);
		static const Fixed &min(const Fixed&, const Fixed&);

		static Fixed &max(Fixed&, Fixed&);
		static const Fixed &max(const Fixed&, const Fixed&);
};

bool	operator< (const Fixed &c1, const Fixed &c2);
bool	operator> (const Fixed &c1, const Fixed &c2);
bool    operator>= (const Fixed &c1, const Fixed &c2);
bool    operator<= (const Fixed &c1, const Fixed &c2);
bool	operator== (const Fixed &c1, const Fixed &c2);
std::ostream& operator<< (std::ostream &os, const Fixed& p);

#endif
