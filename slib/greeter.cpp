#include <string>
#include "greeter.h"


Greeter::Greeter(std::string msg) :
	msg_(msg)
{}

Greeter::Greeter() :
	Greeter("Здравствуйте, ")
{}

Greeter::~Greeter()
{}

std::string Greeter::greet(std::string name)
{
	msg_ += name + "!";

	return msg_;
}
