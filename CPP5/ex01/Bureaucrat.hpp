#ifndef BUR_HPP
#define BUR_HPP

#include <iostream>
#include "Form.hpp"

class	Form;

class	Bureaucrat
{
	protected:
		std::string const	name;
		int					grade;
		bool				able;
	public:
		Bureaucrat();
		Bureaucrat(std::string const name);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const& burcr);
		~Bureaucrat();
		bool				getAble();
		std::string			getName()	const;
		int					getGrade()	const;
		void				signForm(Form& f);

		Bureaucrat&			operator=(Bureaucrat const& burcr);

	class GradeTooHighException
	{
		private:
			std::string m_error;
		public:
			GradeTooHighException(std::string error);
			std::string	getError() const;
	};

	class GradeTooLowException
    {
        private:
            std::string m_error;
        public:
            GradeTooLowException(std::string error);
            std::string getError() const;
    };
};

std::ostream& operator<<(std::ostream &is, const Bureaucrat &bur);

#endif
