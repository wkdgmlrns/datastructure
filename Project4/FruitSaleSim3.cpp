/*
#include<iostream>
using namespace std;

class AAA 
{
public:
	AAA() 
	{
		cout << "empty object" << endl;
	}
	void ShowYourName() 
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB 
{
private:
	AAA &ref;
	const int &num;
public:
	BBB(AAA &r, const int &n) :ref(r), num(n) {}
	void ShowYourName() 
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "i ref name" << num <<endl;
	}
};

int main() 
{
	AAA obj;
	BBB obj2(obj, 20);
	obj2.ShowYourName();
	return 0;
}
*/