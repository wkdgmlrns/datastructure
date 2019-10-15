#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};
class Manage {
private: Node* cursor;
public: 
	Manage();
	~Manage();
	void add(const int data) {};
	void remove() {};
};
Manage::Manage() { cursor == NULL; }
Manage::~Manage() { delete cursor; }
void Manage::add(const int data) {
	Node* v;
	v->data = data;
	v->next = cursor->next;
}
void Manage::remove() 
{
	Node* old;
	old->data = cursor->data;
	
}