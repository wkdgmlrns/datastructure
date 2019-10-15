//#include<iostream>
//using namespace std;
//
//class Base 
//{
//public:
//	Base() { cout << "Base Constructor" << endl; }
//	void SimpleFunc() { cout << "BaseOne" << endl; }
//};
//class MiddleDerivedOne : public Base 
//{
//public:
//	MiddleDerivedOne() : Base() 
//	{
//		cout << "MiddleDerivedOne Constructor" << endl;
//	}
//	void MiddleFuncOne() 
//	{
//		SimpleFunc();
//		cout << "MiddleDerivedOne" << endl;
//	}
//};
//class MiddleDerivedTwo : public Base
//{
//public:
//	MiddleDerivedTwo() : Base()
//	{
//		cout << "MiddleDerivedTwo Constructor" << endl;
//	}
//	void MiddleFuncTwo()
//	{
//		SimpleFunc();
//		cout << "MiddleDerivedTwo" << endl;
//	}
//};
//class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo
//{
//public:
//	LastDerived() : MiddleDerivedOne(), MiddleDerivedTwo() 
//	{
//		cout << "LastDerived Constructor" << endl;
//	}
//	void ComplexFunc() 
//	{
//		MiddleDerivedOne();
//		MiddleDerivedTwo();
//		MiddleDerivedOne::SimpleFunc();
//	}
//};
//
//int main() 
//{
//	cout << "按眉 积己傈....." << endl;
//	LastDerived ldr;
//	cout << "按眉 积己饶......" << endl;
//	ldr.ComplexFunc();
//	return 0;
//}