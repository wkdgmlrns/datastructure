//#include<iostream>
//using namespace std;
//
//class First 
//{
//public:
//	void FirstFunc() { cout << "firstFun()" << endl; }
//	virtual void SimpleFunc() { cout << "first;s simpelFunc" << endl; }
//};
//class second :public First 
//{
//public:
//	void secondtFunc() { cout << "secondFun()" << endl; }
//	virtual void SimpleFunc() { cout << "second simpelFunc" << endl; }
//};
//class thrid :public second
//{
//public:
//	void thridFunc() { cout << "thridFun()" << endl; }
//	virtual void SimpleFunc() { cout << "thrid simpelFunc" << endl; }
//};
//int main() 
//{
//	thrid obj;
//	obj.FirstFunc();
//	obj.secondtFunc();
//	obj.thridFunc();
//	obj.SimpleFunc();
//
//	second& sref = obj;
//	sref.secondtFunc();
//	sref.FirstFunc();
//	sref.SimpleFunc();
//
//	First& fref = sref;
//	fref.FirstFunc();
//	fref.SimpleFunc();
//}