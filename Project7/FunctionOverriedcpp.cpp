//#include<iostream>
//using namespace std;
//
//class first 
//{
//public:
//	virtual void myFun() { cout << "firstFunc" << endl; }
//};
//class second: public first
//{
//public:
//	virtual void myFun() { cout << "second" << endl; }
//};
//class third: public second
//{
//public:
//	third() {};
//	virtual void myFun() { cout << "third" << endl; }
//};
//int main() 
//{
//	third* th = new third();
//	second* se = th;
//	first *fi = se;
//	th->myFun();
//	se->myFun();
//	fi->myFun();
//}