#if !defined(LEAVER_CLASS)
#define LEAVER_CLASS

class Leaver
{
	std::string msg_;
	
	public:
		Leaver(std::string);
		Leaver();
		~Leaver();

		std::string leave(std::string);
};

#endif
