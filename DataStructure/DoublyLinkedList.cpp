#include<iostream>

using namespace std;

class Node 
{
private:
	int data;
	Node *next;
	friend class List;
};
class List 
{
private:
	Node* head;
public:
	List();
	~List();
	void add(int data);
	void remove();
	bool empty();
	int front();
};
List::List() 
{
}
List::~List() 
{
	while (!empty()) 
	{
		remove();
	}
}
void List::add(int data) 
{
	Node *v = new Node;
	v->data = data;
	head = v;
	head->next = v;
	
}
void List::remove() 
{
	Node* old = head;
	head = old->next;
	delete old;
}
bool List::empty() 
{
	return head == NULL;
}
int List::front() 
{
	
	return head->next->data;
}

int main() 
{
	List list;
	list.add(1);
	list.add(2);
	cout << list.front() << endl;
	cout << list.front() << endl;
}
