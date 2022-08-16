#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreationForm", 145, 45)
{
	this->target = target;
}

void    ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (this->getAble() == false || executor.getAble() == false)
    {
        std::cout << "Incorrect bureaucrat or form" << std::endl;
        return ;
    }
	try
	{
		if (this->getExe() >= executor.getGrade())
		{
			std::ofstream out;
			out.open(target + "_shrubbery");
			if (out.is_open())
			{
				out << "                                                         ." << std::endl;
				out << "                                              .         ; " << std::endl;
				out << "                 .              .              ;%     ;;   " << std::endl;
				out << "                   ,           ,                :;%  %;   " << std::endl;
				out << "                    :         ;                   :;%;'     .,   " << std::endl;
				out << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
				out << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
				out << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
				out << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
				out << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
				out << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
				out << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
				out << "                      `@%:.  :;%.         ;@@%;' " << std::endl;
				out << "                        `@%.  `;@%.      ;@@%; " << std::endl;
				out << "                          `@%%. `@%%    ;@@%;  " << std::endl;
				out << "                            ;@%. :@%%  %@@%;     " << std::endl;
				out << "                              %@bd%%%bd%%:;     " << std::endl;
				out << "                                #@%%%%%:;;" << std::endl;
				out << "                                %@@%%%::;" << std::endl;
				out << "                                %@@@%(o);  . '       " << std::endl;
				out << "                                %@@@o%;:(.,'         " << std::endl;
				out << "                            `.. %@@@o%::;         " << std::endl;
				out << "                               `)@@@o%::;         " << std::endl;
				out << "                                %@@(o)::;        " << std::endl;
				out << "                               .%@@@@%::;        " << std::endl;
				out << "                               ;%@@@@%::;.       " << std::endl;
				out << "                              ;%@@@@%%:;;;. " << std::endl;
				out << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
			}
			std::cout << executor.getName() << " executed " << this->getName() << std::endl;
		}
		else
			throw Form::GradeTooLowException();
	}
    catch (const std::exception& e)
	{
        std::cout << executor.getName() << " couldn't execute" << this->getName() << " because his grade is too low" << std::endl;
	}
}
