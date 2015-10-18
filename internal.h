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
	Salt() = 0;
	~Salt() = 0;

/*
	1. Abstract class
	2. Variable containing cation and anion
*/
};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

class ReagentQueue : public salt
{
private:
	Chemical * front;
	Chemical * rear;
	Chemical * trav;

public:
	ReagentQueue()
	{
		front = nullptr;
		rear = nullptr;
		trav = nullptr;
	}

	~ReagentQueue();

	void add();
	void del();
	void traverse();
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
	input(np);
	
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
}

void ReagentQueue::del()
{
	cout<<"The following data is going to be deleted\n";
	Chemical *temp = front;
	front = front->link;
	delete temp;
	cout<<"\nChemical deleted\n";
	getch();
	if(front == rear == NULL)
	cout<<"Queue empty\n";
}

int ReagentQueue::traverse()
{
	Chemical *trav;
	
	trav=front;

	trav->rev=trav->link;
	return Chemical.reagVal;
	trav=trav->link;

	getch();
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

class ChemicalTests
{
public:
	ChemicalTests();
	~ChemicalTests();

	ReagentQueue list;

/*
	1. Variables for reagents and conditions required 
	2. Function checkTest() to check if salt will test positively
*/
};

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