//#include<cstring>
//#include<iostream>
//using namespace std;
//class Employee 
//{
//private:
//	char name[100];
//public:
//	Employee(const char *name) 
//	{
//		strcpy(this->name,name);
//	}
//	void ShowYourName() const 
//	{
//		cout << "name: " << name << endl;
//	}
//class PermanentWorker :public Employee
//{
//private:
//	int salary;
//public:
//	PermanentWorker(const char* name, int money) :salary(money),Employee(name)
//	{}
//	int GetPay() const 
//	{
//		return salary;
//	}
//	void ShowSalaryInfo() const 
//	{
//		ShowYourName();
//		cout << "salary: " << GetPay() << endl<<endl;
//	}
//};
//class EmployeeHandler 
//{
//private:
//	Employee* empList[50];
//	int empNum;
//public:
//	EmployeeHandler() :empNum(0) {}
//	void AddEmployee(Employee* emp) 
//	{
//		empList[empNum++] = emp;
//	}
//	void ShowAllsalaryInfo() const 
//	{
//		/*for (int i = 0; i < empNum; i++)
//			empList[i]->ShowSalaryInfo();*/
//	}
//	void ShowTotalSalary() const 
//	{
//		int sum = 0;
//		/*for (int i = 0; i < empNum; i++) 
//		{
//			sum += empList[i]->GetPay();
//		}*/
//		cout << "salary sum: " << sum << endl;
//	}
//	~EmployeeHandler() 
//	{
//		for (int i = 0; i < empNum; i++) 
//		{
//			delete empList[i];
//		}
//	}
//
//};
//int main(void) 
//{
//	EmployeeHandler handler;
//
//	handler.AddEmployee(new PermanentWorker("KIM", 1000));
//	handler.AddEmployee(new PermanentWorker("NA", 2000));
//	handler.AddEmployee(new PermanentWorker("BAR", 3000));
//
//	handler.ShowAllsalaryInfo();
//
//	handler.ShowTotalSalary();
//	return 0;
//}