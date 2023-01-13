#include <iostream>
#include <string>
#include "greeter.h"
#include "../dlib/leaver.h"


void user_dialog(const std::string &request, Leaver &obj)
{
	std::string name = "";

	std::cout << request;
	std::getline(std::cin, name);

	const std::string msg = obj.leave(name);

	std::cout << msg << std::endl;
}

void user_dialog(const std::string &request, Greeter &obj)
{
	std::string name = "";

	std::cout << request;
	std::getline(std::cin, name);

	const std::string msg = obj.greet(name);

	std::cout << msg << std::endl;
}
