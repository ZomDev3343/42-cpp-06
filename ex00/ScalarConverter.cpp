#include "ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter( const ScalarConverter & src )
{
	(void) src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConverter::~ScalarConverter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScalarConverter &				ScalarConverter::operator=( ScalarConverter const & rhs )
{
	(void) rhs;
	return *this;
}

void ScalarConverter::convert(std::string s)
{
	double	d;
	char	c;
	int		n;
	float	f;

	d = atof(s.c_str());
	f = static_cast<float>(d);
	c = static_cast<char>(d);
	n = static_cast<int>(d);

	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
	{
		if (c == 0 && s.find("0", 0) == s.npos)
			std::cout << "char: impossible" << std::endl;
		else
			std::cout << "char: Not displayable" << std::endl;
	}
	if (n == -2147483647-1 && s != "-2147483648")
		std::cout << "int: impossible" << std::endl;
	else
	{
		if (n == 0 && s.find("0", 0) > 1)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << n << std::endl;
	}
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << d << std::endl;
}

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i )
{
	(void) i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */