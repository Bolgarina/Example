#include "Red.h"

#include <iostream>

void Red::accept(Visitor *v)
{
	v->visit(this);
}

void Red::eye() const
{
	std::cout << "Red::eye" << std::endl;
}