#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain(/* args */);
	Brain(const Brain &source);
	~Brain();
	Brain &operator = (const Brain &source);
};

#endif