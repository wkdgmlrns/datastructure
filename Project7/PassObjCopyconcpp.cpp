//#include<iostream>
//using namespace std;
//
//class sosimple 
//{
//private:
//	int num;
//public:
//	sosimple(int n) :num(n) {};
//	sosimple(const sosimple& copy) : num(copy.num) 
//	{
//		cout << "called sosimple(const sossimple& copy)" << endl;
//	};
//	void showdata() 
//	{
//		cout << "num: "<<num << endl;
//	}
//};
//void simplefuncobj(sosimple ob) 
//{
//	ob.showdata();
//}
//int main(void) 
//{
//	sosimple obj(7);
//	cout << "�Լ� ȣ�� ��" << endl;
//	simplefuncobj(obj);
//	cout << "�Լ� ȣ�� ��" << endl;
//	return 0;
//}