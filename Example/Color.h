#pragma once

class Color
{
public:
	virtual void accept(class Visitor*) = 0;
};

