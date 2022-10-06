#pragma once
#include<iostream>
using namespace std;
template<class T1, class T2>

class node
{
private:
	T1 EmpID;
	T1 CNIC;
	T1 JoiningDate;
	T2 Salary;
	T2 Bonus;
public:
	node<T1, T2>* next;
	node<T1, T2>* prev;
	node(T1 id, T1 CNIC, T1 JoiningDate, T2 salary, T2 bonus)
	{
		this->EmpID = id;
		this->CNIC = CNIC;
		this->JoiningDate = JoiningDate;
		this->Salary = salary;
		this->Bonus = bonus;
	}
};
template<class T1, class T2>
class linkList
{
public:
	node<T1, T2>* head;
	node<T1, T2>* tail;
	linkList()
	{
		head = tail = NULL;
	}

	void insert(T1 id, T1 CNIC, T1 JoiningDate, T2 salary, T2 bonus)
	{
		if (head == NULL) {
		}


	}
	void search(T1 id)
	{

	}
	void UpdateSalary(T1 id, T2 newSalary)
	{

	}
	T2 MaxSalary()
	{

	}
	void print()
	{

	}
};
int main()
{

}