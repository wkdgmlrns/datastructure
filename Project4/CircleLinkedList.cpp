#include<cstdlib>
#include"CirculLinkedList.h"
CircleList::CircleList() :cursor(NULL) {}
CircleList::~CircleList() { while (!empty()) remove(); }
bool CircleList::empty() const { return cursor == NULL; }
const int& CircleList::back() const { return cursor->elem; }
const int& CircleList::front() const { return cursor->next->elem; }
void CircleList::add(const int& e)
{
	CNode* v = new CNode;
	v->elem = e;
	if (cursor == NULL)
	{
		v->next = v;
		cursor = v;
	}
	else
	{
		v->next = cursor->next;
		cursor->next = v;
	}
}
void CircleList::remove()
{
	CNode* old = cursor->next;
	if (old == cursor) { cursor = NULL; }
	else
		cursor->next = old->next;
	delete old;
}