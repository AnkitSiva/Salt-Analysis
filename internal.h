#include "iostream"
#include "stdlib.h"
#include "conio.h"

using namespace std;

struct Chemical
{
	int reagVal;
	Chemical *link;

/*
	Holds integer value correlating to const value for specific reagent
*/
};

class Salt
{
private:
	
	
public:
	Salt();
	~Salt();

/*
	1. Abstract class
	2. Variable containing cation and anion
*/
};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

class ReagentQueue : public Salt
{
private:
	Chemical * front;
	Chemical * rear;
	Chemical * trav;

public:
	
	int num; //counts number of reagents in queue

	ReagentQueue()
	{
		front = NULL;
		rear = NULL;
		trav = NULL;
	}

	~ReagentQueue();

	void add();
	void input();
	void del();
	int traverse();
/*
	1. Consists of general implementation of linked list queue with operations such as add, delete and traverse.
	2. It is used to hold a list of type 'Chemical' which serves as a list of reagents
*/
};

void ReagentQueue::add()
{
	Chemical *np = new Chemical;

	if(np == NULL)
	{
		cout<<"No memory";
		exit(0);
	}

	np->link = NULL;
	
		input();
	
	if(front == NULL)
	{
		front = np;
		rear = np;
	}

	else
	{
		rear->link = np;
		rear = np;
	}

	trav = front;
}

void ReagentQueue::del()
{

	Chemical *temp = front;
	
	front = front->link;
	
	delete temp;
	
	cout<<"\nChemical deleted\n";
	
	getch();

	if(front == rear == NULL)
		cout<<"Queue empty\n";
	
	trav = front;
}

int ReagentQueue::traverse()
{
	if(trav -> link != NULL)
	{
		trav = trav->link;
		return trav->reagVal;
		trav=trav->link;
	}

	else 
		trav = front;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

class User
{
private:
	char username[];
	char password[];
	char salt[];

public:
	User();
	~User();
	
/*
	1. Variables for current salt, successes and failures
	2. Functions to write to binary file
	3. Function reading past tests
*/
};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

int compareTests(ReagentQueue userQ, ReagentQueue testQ)
{
	int count = 0;

	if(userQ.num == testQ.num)
	{
		while(userQ.traverse() == testQ.traverse())
		{
			count++;
		}

		if (count == userQ.num)
			return 1;

		else
			return 0;
	}
}