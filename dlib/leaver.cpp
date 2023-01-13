#include <string>
#include "leaver.h"


Leaver::Leaver(std::string msg) :
	msg_(msg)
{}

Leaver::Leaver() :
	Leaver("До свидания, ")
{}

Leaver::~Leaver()
{}

std::string Leaver::leave(std::string name)
{
	msg_ += name + "!";

	return msg_;
}
