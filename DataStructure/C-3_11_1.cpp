//#include<iostream>
//using namespace std;
////Singly Linked List ����
//class Node 
//{
//private:
//	int data;
//	Node* next;
//	friend class reverseList;
//};
//class reverseList
//{
//private:
//	Node* head;
//public:
//	reverseList();
//	void add(const int data);
//	void reversing();
//	void ptr(int n);
//	void createList(int n);
//};
//reverseList::reverseList():head(NULL) {};
////list node�� ����
//void reverseList::add(const int data)
//{
//	Node* v = new Node;
//	v->data = data;
//		v->next = head;
//		head = v;
//}
////����Ʈ reversing ���� �Լ�
//void reverseList::reversing()
//{
//	//���� head�� ����Ű�� ����� ������ ���� current�� �Ҵ�
//	//reverse�� ���� prev,re��� ����
//	Node* current = head;
//	Node* prev = NULL;
//	Node* re = NULL;
//	while (current != NULL) 
//	{
//		//next����� �ּҸ� re�� ����
//		re = current->next;
//		//���� ����� next���� reverse��
//		current->next = prev;
//		//head���� ��ĭ �ű�
//		prev = current;
//		current = re;
//	}
//	head = prev;
//}
////����Ʈ ��¹�
//void reverseList::ptr(int n)
//{
//	Node* v = head;
//	while (n > 0) 
//	{
//		cout << v->data <<" ";
//		v = v->next;
//		n--;
//	}
//}
////list�� ��� ����
//void reverseList::createList(int n)
//{
//	for (int i = 1; i <= n; i++) { add(i); }
//}
//int main() 
//{	
//	int m;
//	cout << "����Ʈ ���� �Է�: "; cin >> m;
//	reverseList list;
//	cout << "create List" << endl;
//	list.createList(m);
//	list.ptr(m);
//	cout << endl;
//	cout << "reversing List" << endl;
//	list.reversing();
//	list.ptr(m);
//}