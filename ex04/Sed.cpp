#include "Sed.hpp"
#include <cstdlib>
#include <cstring>

Sed::Sed(std::string infile, std::string find, std::string replace)
{
	std::string outfile = infile + ".replace";
	_infile.open(infile.c_str());
	if (!_infile.is_open())
	{
		std::cerr << infile << ": " << strerror(errno) << std::endl;
		exit(1);
	}
	_outfile.open(outfile.c_str());
	if (!_outfile.is_open())
	{
		std::cerr << outfile << ": " << strerror(errno) << std::endl;
		exit(1);
	}
	findAndReplace(find, replace);
}

Sed::~Sed()
{
	_infile.close();
	_outfile.close();
}

void Sed::findAndReplace(std::string find, std::string replace)
{
	std::string line;

	while (std::getline(_infile, line))
	{
		if (!_infile.eof())
			line.append("\n");
		size_t pos;
		while ((pos = line.find(find)) != std::string::npos)
		{
			line.erase(pos, find.size());
			line.insert(pos, replace);
		}
		_outfile << line;
	}
}
