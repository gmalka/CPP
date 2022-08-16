#include <iostream>
# include <cstddef>
# include <exception>

template <typename T>
class	Array {
	private:
		T				*_arr;
		unsigned int	length;
	public:
		Array():_arr(new T[0]), length(0) {}
		Array(unsigned int t):_arr(new T[t]), length(t) {}
		Array(const Array& other): _arr(new T[0])
		{
			*this = other;
		}
		~Array() {delete[] this->_arr;}

		Array& operator=(const Array& other)
		{
			if (this == &other)
				return *this;
			delete[] this->_arr;
			this->_arr = new T[other.length];
			for (int i = 0; i < other.length; i++)
			{
				this->_arr[i] = other._arr[i];
			}
			this->length = other.length;
			return *this;
		}

		T&		operator[](unsigned int i)
		{
			if (i >= this->length || i < 0)
				throw Array::ErrorOutOfArray(); 
			return this->_arr[i];
		}

		const T& operator[](std::size_t i) const
		{
            if (i >= this->length || i < 0)
                throw Array::ErrorOutOfArray();
            return this->_arr[i];
		}

		unsigned int	size() const
		{
			return this->length;
		}

		class ErrorOutOfArray : public std::exception
	{
		public:
			virtual const char* what() const throw()
				{
					return "Out of array range!";
				}
	};
};
