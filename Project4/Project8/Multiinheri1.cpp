//#include<iostream>
//using namespace std;
//
//class BaseOne 
//{
//public:
//	void SImpleFunc() { cout << "BaseOne" << endl; }
//};
//class BaseTwo 
//{
//public:
//	void SimpleFunc() { cout << "BaseTwo" << endl; }
//};
//class MultiDerived : public BaseOne, protected BaseTwo 
//{
//public:
//	void ComplexFunc() 
//	{
//		SImpleFunc();
//		SimpleFunc();
//	}
//};
//
//int main(void) 
//{
//	MultiDerived mdr;
//	mdr.ComplexFunc();
//	return 0;
//}