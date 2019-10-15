//#include <iostream>
///* begin_your_code 
//#include <whateveryouwant>
// end_your_code */
//int tafunction(int argc);
//
//using namespace std;
//
///* begin_your_code */
//
//class node
//{
//private:
//	int elem;
//	node* next;
//
//	friend class josephus;
//};
//class josephus
//{
//public: josephus();
//		void add(const int e);
//		void ptr(int n);
//		int solution(int n, const int  k);
//		void creatlist(const int n);
//private:
//	node* cursor;
//	node* head;
//};
//
///* end_your_code */
//
//josephus::josephus() :cursor(null) {}
//void josephus::add(const int e)
//{
//	node* v = new node;
//	v->elem = e;
//	if (cursor == null)
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
//void josephus::ptr(int n)
//{
//	node* ptr1 = head;
//	cout << "create list: ";
//	while (n > 0) {
//		cout << ptr1->elem << " ";
//		ptr1 = ptr1->next;
//		n--;
//	}
//	cout << endl;
//}
//int josephus::solution(int n, const int  k)
//{
//	int count = 1;
//	node* index1 = head;
//	node* index2 = head;
//	while (n > 1)
//	{
//		if (count%k == 0) {
//			cout << "delete node: " << index1->elem << endl;
//			index2->next = index1->next;
//			index1 = index2->next;
//			count++;
//			n--;
//		}
//		else {
//			index2 = index1;
//			index1 = index1->next;
//			count++;
//		}
//	}
//	return index1->elem;
//}
//void josephus::creatlist(const int n)
//{
//	for (int i = 1; i <= n; i++) 
//	{
//		add(i);
//	}
//	return;
//}
//
//int main(int argc, char** argv)
//{
//	int n = 0, k = 0;
//	int result = 0;
//	/* begin_your_code */
//	josephus josep;
//	int a = 0, b = 0;
//	cout << "n:";
//	cin >> n;
//	cout << "k:";
//	cin >> k;
//	josep.creatlist(n);
//	josep.ptr(n);
//	result = josep.solution(n, k);
//	cout << "result:" << result << endl;
//	/* end_your_code */
//
//	if (tafunction(argc)) {
//		n = atoi(argv[1]);
//		k = atoi(argv[2]);
//		cout << josep.solution(n, k);
//		return 0;
//	}
//	return 0;
//}
//
//int tafunction(int argc)
//{
//	if (argc > 2)
//		return true;
//	else
//		return false;
//}
