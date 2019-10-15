#include<iostream>
using namespace std;

struct Node 
{
	int data;
	Node* next;
};
Node* create() 
{
	Node* v = new Node;
	v->next = NULL;
	return v;
}