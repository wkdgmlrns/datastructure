/*
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class StringNode
{
private:
	string elem;
	StringNode* next;

	friend class StringLinkedList;
};

class StringLinkedList 
{
public: StringLinkedList();
		~StringLinkedList();
		bool empty() const;
		const string& front() const;
		void addFront(const string& e);
		void removeFront();
		void pri();
private:
	StringNode* head;
	int len;
};
StringLinkedList::StringLinkedList() :head(NULL),len(0) {}
StringLinkedList::~StringLinkedList() { while (!empty()) removeFront(); }
bool StringLinkedList::empty() const { return head == NULL; }
const string& StringLinkedList::front() const { return head->elem; }
void StringLinkedList::addFront(const string& e) 
{
	StringNode* v = new StringNode;
	v->elem = e;
	v->next = head;
	head = v;
	len++;
}
void StringLinkedList::removeFront() 
{
	StringNode* old = head;
	head = old->next;
	delete old;
	len--;
}
void StringLinkedList::pri() 
{
	StringNode* head = this->head;
	while (head) {
		cout << head->elem << endl;
		head = head->next;
	}
}
int main(int argc,char const *argv[]) 
{
	StringLinkedList* list = new StringLinkedList;
	list->addFront("wkdgml1");
	list->addFront("wkdgml2");
	list->addFront("wkdgml3");
	list->addFront("wkdgml4");
	list->addFront("wkdgml5");
	list->pri();
	list->removeFront();
	list->pri();
	list->empty();
	list->pri();
	
	return 0;
}
*/
/*
template <typename e>
class snode {
private:
	e elem;
	snode<e>* next;
	friend class slinkedlist<e>;
};
template <typename e>
class slinkedlist 
{
public:
	slinkedlist();
	~slinkedlist();
	bool empty() const;
	const e& front() const;
	void addfront(const e& e);
	void removefront();
private:
	snode<e>* head;
};
template <typename e>
slinkedlist
*/
