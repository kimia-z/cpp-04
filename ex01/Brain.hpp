#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &source);
	~Brain();
	Brain &operator = (const Brain &source);
	std::string getIdea(int index) const;
	void setIdea(std::string idea, int index);
};

#endif