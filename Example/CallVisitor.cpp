#include "CallVisitor.h"
#include "Red.h"
#include "Blu.h"

void CallVisitor::visit(Red *r)
{
	r->eye();
}

void CallVisitor::visit(Blu *b)
{
	b->sky();
}