#include "Span.hpp"

Span::Span(unsigned int n)
{
	this->n = n;
	this->index = 0;
}

Span::Span(Span const& other)
{
	for (int i = 0; i < other.n; i++)
	{
		v.push_back(other.v[i]);
	}
	this->n = other.n;
    this->index = other.index;
}

Span::~Span()
{}

Span&   Span::operator=(Span const& other)
{
	for (int i = 0; i < other.n; i++)
    {
        v.push_back(other.v[i]);
    }
	this->n = other.n;
	this->index = other.index;
	return *this;
}

void    Span::addNumber(unsigned int i)
{
	if (++(this->index) <= this->n)
	{
		v.push_back(i);
	}
	else
		throw outOfBoundsException();
}

void    Span::addNumber(std::vector<int>::iterator i1, std::vector<int>::iterator i2)
{
	this->index += std::distance(i1, i2);
	if (this->index <= n)
		this->v.insert(this->v.end(), i1, i2);
	else
		throw outOfBoundsException();
}

int     Span::shortestSpan()
{
	int		min;

	if (index <= 1)
		throw outOfBoundsException();
	std::vector<int> copy(this->v);
	std::sort(copy.begin(), copy.end());
	min = copy[1] - copy[0];
	for (std::vector<int>::iterator iter = copy.begin(); iter != copy.end() - 1; ++iter)
	{
		if (*(iter + 1) - *iter < min)
			min = *(iter + 1) - *iter;
	}
	return min;
}

int     Span::longestSpan()
{
	if (index <= 1)
        throw outOfBoundsException();
	return *std::max_element(this->v.begin(), this->v.end()) - *std::min_element(this->v.begin(), this->v.end());
}

const char* Span::outOfBoundsException::what() const throw()
{
	return "Out of vector Bounds!";
}
