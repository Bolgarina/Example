#include "Red.h"
#include "Blu.h"
#include "CallVisitor.h"
#include "CountVisitor.h"

#include <iostream>
#include <list>
#include <memory>

int main()
{
	std::list<std::shared_ptr<Color>> set;

	set.push_back(std::make_shared<Red>());
	set.push_back(std::make_shared<Blu>());
	set.push_back(std::make_shared<Blu>());
	set.push_back(std::make_shared<Red>());
	set.push_back(std::make_shared<Red>());
  
	CountVisitor count_operation;   
	CallVisitor call_operation;   
	
	for (auto it = set.begin(); it != set.end(); it++)
	{
		(*it)->accept(&count_operation);
		(*it)->accept(&call_operation);
	}

	count_operation.report_num();

	return 0;
}