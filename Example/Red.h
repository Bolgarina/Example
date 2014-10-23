#pragma once

#include "Color.h"
#include "Visitor.h"

class Red : public Color
{
public:
	void accept(Visitor* v);
	void eye() const;
};

