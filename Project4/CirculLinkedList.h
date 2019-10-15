#pragma once
#ifndef __CirculeLinkedList_
#define __CirculeLinkedList_
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
		~CircleList();
		bool empty() const;
		const int& front() const;
		const int& back() const;
		void add(const int& e);
		void remove();
private:
	CNode* cursor;
};
#endif // !__CirculeLinkedList_
