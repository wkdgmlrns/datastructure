/*
#include<iostream>
using namespace std;

class SelfRef 
{
private:
	int num;
public:
	SelfRef(int n):num(n) 
	{
		cout << "��ü����" << endl;
	}
	SelfRef& Adder(int n) 
	{
		num += n;
		return *this;
	}
	SelfRef& Shwo()
	{
		cout << num << endl;
		return *this;
	}
};

int main() 
{
	SelfRef obj(3);
	SelfRef &ref = obj.Adder(2);

	obj.Shwo();
	ref.Shwo();

	ref.Adder(1).Shwo().Adder(2).Shwo();
	return 0;
}
*/