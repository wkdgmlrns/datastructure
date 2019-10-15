/*reversingSinglyLinkedList*/
//
//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//struct Node 
//{
//	int data;
//	struct Node* next;
//	Node(int data) {
//		this->data = data;
//		next = NULL;
//	}
//};
//struct LinkedList 
//{
//	Node* head;
//	LinkedList() 
//	{
//		head = NULL;
//	}
//	void reverse() 
//	{
//		Node* current = head;
//		Node* prev = NULL;
//		Node* next = NULL;
//
//		while (current != NULL) {
//			next = current->next;
//			current->next = prev;
//			prev = current;
//			current = next;
//		}
//		head = prev;
//	}
//	void print() 
//	{
//		struct Node* temp = head;
//		while (temp != NULL) {
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//	}
//	void push(int data) 
//	{
//		Node* temp = new Node(data);
//		temp->next = head;
//		head = temp;
//
//	}
//};
//int main()
//{
//	srand((unsigned int)time(NULL));
//	LinkedList list;
//	int n;
//	cout << "데이터 수를 입력하세요";
//	cin >> n;
//	cout << "리스트 목록" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		list.push((rand() % 10) + 1);
//	}
//	list.print(); 
//	cout << endl;
//	cout << "reversing" << endl;
//	list.reverse();
//	list.print();
//	
//}
