#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout
		<< "The memory address of the string variable: " << &str << '\n'
		<< "The memory address held by stringPTR: " << strPTR << '\n'
		<< "The memory address held by stringREF: " << &strREF << '\n';

	std::cout
		<< "The value of the string variable: " << str << '\n'
		<< "The value pointed to by stringPTR: " << *strPTR << '\n'
		<< "The value pointed to by stringREF: " << strREF << '\n';
	return (0);
}
