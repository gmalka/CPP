#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	protected:
		int			index;
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& brain);
		~Brain();
		void				setIdea(std::string idea);
		void				getIdea(int id) const;
		const std::string	*getIdeas() const;
		Brain&				operator=(const Brain& brain);
};

#endif
