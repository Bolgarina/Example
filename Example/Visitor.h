#pragma once

class Visitor
{
public:
	virtual void visit(class Red*) = 0;
	virtual void visit(class Blu*) = 0;
};

