#include <iostream>
#include <string>
#include "leaver.h"


int main()
{
	std::string name = "";

	std::cout << "Введите имя: ";
	std::getline(std::cin, name);

	Leaver bay;

	const std::string msg = bay.leave(name);

	std::cout << msg << std::endl;

	return 0;
}
