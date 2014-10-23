#include "Blu.h"

#include <iostream>

void Blu::accept(Visitor* v)
{
	v->visit(this);
}

void Blu::sky() const
{
	std::cout << "Blu::sky" << std::endl;
}