#include "Base.hpp"



Base* generate(void)
{
	int r = rand() % 3;
	switch (r)
	{
		case 0:
			return dynamic_cast<Base*>(new A);
		case 1:
			return dynamic_cast<Base*>(new B);
		default:
			return dynamic_cast<Base*>(new C);
	}
}

void identify(Base *p)
{
	A* a;
	B* b;
	C* c;

	a = dynamic_cast<A*>(p);
	if (a)
		return std::cout << "Object pointed by p -> 'A'" << std::endl, (void) 0;
	b = dynamic_cast<B*>(p);
	if (b)
		return std::cout << "Object pointed by p -> 'B'" << std::endl, (void) 0;
	c = dynamic_cast<C*>(p);
	if (c)
		return std::cout << "Object pointed by p -> 'C'" << std::endl, (void) 0;
	std::cout << "Object pointed by p -> 'Base'" << std::endl;
}

void identify(Base &p)
{
	A a;
	B b;
	C c;

	try
	{
		a = dynamic_cast<A&>(p);
		return std::cout << "Object pointed by p -> 'A'" << std::endl, (void) 0;
	}
	catch(const std::exception& e){}
	
	try
	{
		b = dynamic_cast<B&>(p);
		return std::cout << "Object pointed by p -> 'B'" << std::endl, (void) 0;
	}
	catch(const std::exception& e){}

	try
	{
		c = dynamic_cast<C&>(p);
		return std::cout << "Object pointed by p -> 'C'" << std::endl, (void) 0;
	
	}
	catch(const std::exception& e){}
	
	std::cout << "Object pointed by p -> 'Base'" << std::endl;
}

Base::~Base()
{
	//std::cout << "Base destructor" << std::endl;
}

A::~A()
{
	//std::cout << "A destructor" << std::endl;
}

B::~B()
{
	//std::cout << "B destructor" << std::endl;
}

C::~C()
{
	//std::cout << "C destructor" << std::endl;
}
