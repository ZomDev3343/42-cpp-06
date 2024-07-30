# include "Serializer.hpp"

int main()
{
	Serializer::Data	data;
	Serializer::Data	*dataPtr;
	uintptr_t			dataUPtr;

	data.x = 120;
	data.y = 42;
	data.name = "Thomas";

	dataUPtr = Serializer::serialize(&data);
	dataPtr = Serializer::deserialize(dataUPtr);

	std::cout << "Is &data same as dataPtr ? " << (dataPtr == &data) << std::endl;
	std::cout << "X: " << dataPtr->x << "\nY: " << dataPtr->y << "\nName: "
	<< dataPtr->name << std::endl;

	return 0;
}