#include "Serializer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Serializer::Serializer()
{
}

Serializer::Serializer( const Serializer & src )
{
	(void) src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Serializer::~Serializer()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Serializer &				Serializer::operator=( Serializer const & rhs )
{
	(void) rhs;
	return *this;
}

uintptr_t Serializer::serialize(Serializer::Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Serializer::Data *Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Serializer::Data*>(raw);
}

std::ostream &			operator<<( std::ostream & o, Serializer const & i )
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