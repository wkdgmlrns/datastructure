//#include<iostream>
//using namespace std;
//
//typedef struct data 
//{
//	int data;
//	void(*ShowData)(Data*);
//	void(*Add)(Data*, int);
//} Data;
//
//void ShowData(Data* THIS) { cout << "data: " << THIS->data << endl; }
//void Add(Data* THIS, int num) { THIS->data += num; }
//
//int main(void) 
//{
//	Data obj1 = { 15,ShowData, Add };
//	Data obj2 = { 7, ShowData, Add };
//
//	obj1.Add(&obj1, 1);
//	obj2.Add(&obj2, 9);
//	obj1.ShowData(&obj1);
//	obj2.ShowData(&obj2);
//	return 0;
//}