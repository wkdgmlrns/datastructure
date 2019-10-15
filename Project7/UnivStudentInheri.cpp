//#include<iostream>
//#include<cstring>
//using namespace std;
//
//class Person 
//{
//private:
//	int age;
//	char name[50];
//public:
//	Person(int myage,const char* myname) : age(myage) 
//	{
//		strcpy(name, myname);
//	}
//	void WhatYourName() const 
//	{
//		cout << "My name is: " << name << endl;
//	}
//	void HowOldAreYou() const 
//	{
//		cout << "I'm " << age << "years old" << endl;
//	}
//};
//class UnivStudent :public Person 
//{
//private:
//	char major[50];
//public:
//	UnivStudent(const char* myname, int myage,const char* mymajor) :Person(myage, myname) 
//	{
//		strcpy(major, mymajor);
//	}
//	void WhoAreYou() const 
//	{
//		WhatYourName();
//		HowOldAreYou();
//		cout << "my major is: " << major << endl;
//	}
//};
//int main(void) 
//{
//	UnivStudent ustd1("Lee", 22, "computer eng");
//	ustd1.WhoAreYou();
//
//}