/*
#include<iostream>
using namespace std;

class CNode 
{
private:
	int elem;
	CNode* next;

	friend class CircleList;
};
class CircleList
{
public: CircleList();
		void add(const int e);
		void ptr(int n);
		int position(int n, const int  k);
private:
	CNode* cursor;
	CNode* head;
};
CircleList::CircleList() :cursor(NULL){}
void CircleList::add(const int e)
{
	CNode* v = new CNode;
	v->elem = e;
	if (cursor == NULL) 
	{
		v->next = v;
		cursor = v;
		head = v;
	}
	else 
	{
		cursor->next = v;
		cursor = cursor->next;
		cursor->next = head;
	}
}
void CircleList::ptr(int n)
{
	CNode* ptr1 = head;
	 while(n>0){
		cout << ptr1->elem <<" ";
		ptr1 = ptr1->next;
		n--;
	 }
}
int CircleList::position(int n, const int  k)
{
	int count = 1;
	CNode* index1 = head;
	CNode* index2 = head;
	while (n > 1) 
	{
		if (count%k == 0) {
			cout << "delete node" << index1->elem<<endl;
			index2->next = index1->next;
			index1 = index2->next;
			count++;
			n--;
		}
		else {
			index2 = index1;
			index1 = index1->next;
			count++;
		}
	}
	return index1->elem;
}
int main() 
{
	int n,k;
	CircleList playList;
	cout << "N : ";
	cin >> n;
	cout << "K : ";
	cin >> k;
	for (int i = 1; i <= n; i++) 
	{	
		playList.add(i);
	}
	cout << "리스트 생성" << endl;
	playList.ptr(n);
	cout << endl;
	int result = playList.position(n,k);
	cout <<"result : " <<result << endl;
	return 0;
}
*/