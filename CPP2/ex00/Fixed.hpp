#include <iostream>

class Fixed {
	private:
		int					store;
		static const int 	bit_number;
	public:
		Fixed();
		Fixed(Fixed &taken);
		void	operator= (const Fixed &fixed);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
