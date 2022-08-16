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
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream& operator<< (std::ostream &os, const Fixed& p);
