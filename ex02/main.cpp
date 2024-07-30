#include "Base.hpp"

int main()
{
	std::srand(time(NULL));

	Base* ptr = generate();
	A a;
	B b;
	C c;
	identify(ptr);
	delete ptr;

	ptr = generate();
	identify(ptr);
	delete ptr;

	ptr = generate();
	identify(ptr);
	delete ptr;

	ptr = generate();
	identify(ptr);
	delete ptr;
	
	std::cout << std::endl;

	identify(a);
	identify(b);
	identify(c);

	return 0;
}