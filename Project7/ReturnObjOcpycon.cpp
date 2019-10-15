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
//	sosimple& AddNum(int n)
//	{
//		num += n;
//		return *this;
//	}
//	void ShowData() 
//	{
//		cout << "num: " << num << endl;
//	}
//};
//sosimple simplefuncobj(sosimple ob) 
//{
//	cout << "return ÀÌÀü: " << endl;
//	return ob;
//}
//int main(void) 
//{
//	sosimple obj(7);
//	simplefuncobj(obj).AddNum(30).ShowData();
//	obj.ShowData();
//	return 0;
//}