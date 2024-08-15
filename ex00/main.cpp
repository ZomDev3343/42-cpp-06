# include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	//ScalarConverter t;
	if (ac == 2)
		ScalarConverter::convert(av[1]);
	else
		std::cout << "Usage: ./scalar <number_to_convert>" << std::endl;
	return 0;
}
