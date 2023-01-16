#include <iostream>
#include <string>
#include "./dlib/leaver.h"
#include "./slib/user_dialog.h"


int main()
{
	const std::string request = "Введите имя: ";
	Leaver bay;

	user_dialog(request, bay);

	return 0;
}
