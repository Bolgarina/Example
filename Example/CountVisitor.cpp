#include "CountVisitor.h"

#include <iostream>

CountVisitor::CountVisitor() : m_num_red(0), m_num_blu(0)
{
}

void CountVisitor::visit(Red*)
{
	++m_num_red;
}

void CountVisitor::visit(Blu*)
{
	++m_num_blu;
}

void CountVisitor::report_num()
{
	std::cout << "Reds " << m_num_red << ", Blus " << m_num_blu << std::endl;
}
