#pragma
#include<iostream>
using namespace std;
template <class T>
 class Node {
 public:
	T val;
	Node<T> *next;
};
template <class T>
class LinkedList {
public:
	LinkedList();
	~LinkedList();
	void insertBack(T val);
	bool removeBack();
	void print();
	bool isEmpty();
	int size();
	void clear();
	void insertFront(T val);
	bool removeFront();

	T& firstNum();
private:
	Node<T> *first;
	Node<T> *last;
};