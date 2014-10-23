#pragma once

#include "Visitor.h"

class CallVisitor : public Visitor
{
public:
	void visit(Red *r);
	void visit(Blu *b);
};
