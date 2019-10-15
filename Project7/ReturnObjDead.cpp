//#include<iostream>
//using namespace std;
//
//class Sosimple 
//{
//private:
//	int num;
//public:
//	Sosimple(int n) :num(n) 
//	{
//		cout << "New Object: " << this<<endl;
//	}
//	Sosimple(const Sosimple& copy) :num(copy.num)
//	{
//		cout << "new Copy obj:" << this << endl;
//	}
//	~Sosimple()
//	{
//		cout << "Destory: " << this << endl;
//	}
//};
//Sosimple SimpleFuncObj(Sosimple ob) 
//{
//	cout << "parm ADR: " << &ob << endl;
//	return ob;
//}
//int main(void) 
//{
//	Sosimple obj(7);
//	SimpleFuncObj(obj);
//
//	cout << endl;
//	Sosimple tempRef = SimpleFuncObj(obj);
//	cout << "return obj: " << &tempRef << endl;
//	return 0;
//}