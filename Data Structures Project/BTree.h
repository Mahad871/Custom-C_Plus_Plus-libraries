#pragma once


template <class T>

class Node
{
public:

	T data;
	Node* NextNode;

	Node()
	{
		NextNode = NULL;
	}

	Node(T d, Node* n)
	{
		setval(d);
		setNext(n);
	}

	Node(T d)
	{
		setval(d);
		NextNode = NULL;

	}

	void setval(T d)
	{
		val = d;
	}

	void setNext(Node* n)
	{
		NextNode = n->NextNode;

	}

	T getval()
	{
		return val;
	}

	Node* getNext()
	{
		return this->NextNode;
	}


};

template <class T>

class BTree
{
public:

	Node<T>* head;


	BTree()
	{
	}

	


};

