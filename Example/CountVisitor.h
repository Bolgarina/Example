#pragma once

#include "Visitor.h"

class CountVisitor : public Visitor
{
public:
	CountVisitor();
	void visit(Red*);
	void visit(Blu*);
	void report_num();

private:
	int m_num_red;
	int m_num_blu;
};
