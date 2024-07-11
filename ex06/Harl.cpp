#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::debug(void)
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	const int count = 4;
	std::string levels[count] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	int index = 0;
	while (index < count  && levels[index] != level)
		index++;
	switch (index)
	{
		case 0:
			this->debug();
			// Fallthrough
		case 1:
			this->info();
			// Fallthrough
		case 2:
			this->warning();
			// Fallthrough
		case 3:
			this->error();
			break ;
		default:
			std::cerr << "Unknown log level: " << level << "\n";
	}
}
