# include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	//ScalarConverter t;
	if (ac == 2)
		ScalarConverter::convert(av[1]);
	return 0;
}