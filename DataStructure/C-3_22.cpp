//#include<iostream>
//#include<ctime>
//
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* next;
//};
//class CircleList {
//public: Node* cursor;
//		 Node* head;
//public:
//	CircleList();
//	~CircleList();
//	void add(int data);
//	void ptr1(const int n);
//	void createList(const int n,int random);
//};
//CircleList::CircleList():cursor(NULL) {}
//CircleList::~CircleList() {}
////��� ���� �� list ����
//void CircleList::add(const int data)
//{	
//	Node* v = new Node;
//	v->data = data;
//	if (cursor == NULL) 
//	{
//		v->next = v;
//		cursor = v;
//		head = v;
//	}
//	else 
//	{
//		cursor->next = v;
//		cursor = cursor->next;
//		cursor->next = head;
//	}
//}
////CircleList ��¹�
//void CircleList::ptr1(const int n)
//{
//	for (int i = 1; i <= n; i++) {
//		cout << cursor->data << " ";
//		cursor = cursor->next;
//	}
//}
////����Ʈ ������ ���� ��ġ�� �ٸ��� �ϱ����� random���� �Է¹޾� �׸�ŭ cursor�� ������
//void CircleList::createList(const int n,int random) 
//{
//	for(int i=1;i<=n;i++){
//		add(i);
//	}
//	while(random>0){
//	cursor = cursor->next;
//	random--;
//	}
//}
////cursor�� ��ġ�� ���ؼ� ���������� �ٸ��� ���θ� �Ǵ�
//void compareList(CircleList* list1, CircleList* list2)
//{
//	if (list1->cursor == list2->cursor) 
//	{
//		cout << "The starting position is same." << endl;
//		cout << "list_1 start point: " << list1->cursor->data << endl;
//		cout << "list_2 start point: " << list2->cursor->data << endl;
//	}
//	else 
//	{
//		cout << "The starting position is different." << endl;
//		cout << "list_1 start point: " << list1->cursor->data << endl;
//		cout << "list_2 start point: " << list2->cursor->data << endl;
//	}
//}
//int main() 
//{
//	srand((unsigned int)time(NULL));
//	int n;
//	CircleList list1;
//	CircleList list2;
//	cout << "createList: "; cin >> n;
//	list1.createList(n,(rand() % 10)+1);
//	list2.createList(n,(rand() % 10)+1);
//	cout << "firstList: ";
//	list1.ptr1(n); cout << endl;
//	cout << "secondList: ";
//	list2.ptr1(n); cout << endl;
//	compareList(&list1,&list2);
//}