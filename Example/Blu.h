#pragma once

#include "Color.h"
#include "Visitor.h"

class Blu : public Color
{
public:
	void accept(Visitor* v);
	void sky() const;
};

