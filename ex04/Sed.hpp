#ifndef __SED_HPP__
#define __SED_HPP__

#include <string>
#include <iostream>
#include <fstream>

class Sed {
	private:
		std::ifstream	_infile;
		std::ofstream	_outfile;
		void			findAndReplace(std::string find, std::string replace);
	public:
		Sed(std::string infile, std::string find, std::string replace);
		~Sed(void);
};

#endif
