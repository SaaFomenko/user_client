#if !defined(GREETER_CLASS)
#define GREETER_CLASS

class Greeter
{
	std::string msg_;
	
	public:
		Greeter(std::string);
		Greeter();
		~Greeter();

		std::string greet(std::string);
};

#endif
