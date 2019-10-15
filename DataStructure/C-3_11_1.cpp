//#include<iostream>
//using namespace std;
////Singly Linked List 생성
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
////list node값 생성
//void reverseList::add(const int data)
//{
//	Node* v = new Node;
//	v->data = data;
//		v->next = head;
//		head = v;
//}
////리스트 reversing 실행 함수
//void reverseList::reversing()
//{
//	//현재 head가 가르키는 노드의 마지막 값을 current에 할당
//	//reverse를 위해 prev,re노드 생성
//	Node* current = head;
//	Node* prev = NULL;
//	Node* re = NULL;
//	while (current != NULL) 
//	{
//		//next노드의 주소를 re에 저장
//		re = current->next;
//		//현재 노드의 next값을 reverse함
//		current->next = prev;
//		//head값을 한칸 옮김
//		prev = current;
//		current = re;
//	}
//	head = prev;
//}
////리스트 출력문
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
////list의 노드 생성
//void reverseList::createList(int n)
//{
//	for (int i = 1; i <= n; i++) { add(i); }
//}
//int main() 
//{	
//	int m;
//	cout << "리스트 갯수 입력: "; cin >> m;
//	reverseList list;
//	cout << "create List" << endl;
//	list.createList(m);
//	list.ptr(m);
//	cout << endl;
//	cout << "reversing List" << endl;
//	list.reversing();
//	list.ptr(m);
//}