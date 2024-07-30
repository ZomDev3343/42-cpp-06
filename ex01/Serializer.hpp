#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>

class Serializer
{

	public:

		~Serializer();

		struct Data
		{
			int	x;
			int	y;
			std::string name;
		};
		
		Serializer &		operator=( Serializer const & rhs );
		static uintptr_t			serialize(Data *ptr);
		static Data*				deserialize(uintptr_t raw);

	private:
		Serializer();
		Serializer( Serializer const & src );

};

std::ostream &			operator<<( std::ostream & o, Serializer const & i );

#endif /* ****************************************************** SERIALIZER_H */