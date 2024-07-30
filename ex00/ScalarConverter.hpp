#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctype.h>

class ScalarConverter
{

	public:

		~ScalarConverter();
		ScalarConverter &		operator=( ScalarConverter const & rhs );
		static void				convert(std::string s);

	private:
		ScalarConverter();
		ScalarConverter( ScalarConverter const & src );
};

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i );

#endif /* ************************************************* SCALARCONVERTER_H */