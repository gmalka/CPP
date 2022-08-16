#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		std::string const	name;
		int	const			g_sig;
		int	const			g_exe;
		bool				sign, able;
	public:
		Form();
		Form(std::string name, int sig, int exe);
		Form(Form const&);
		virtual				~Form();
		void				beSigned(Bureaucrat& bur);
		std::string			getName() const;
		bool				getAble() const;
		int					getSig() const;
		int					getExe() const;
		void				setAble(bool b);

		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException: public std::exception
		{
			const char*	what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif
