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
	static int n_Anion;
	static int n_Cation;

public:
	
	Salt();
	
	static int GenerateRandomAnion();
	static int GenerateRandomCation();
	static char* getAnion(int);
	static char* getCation(int);

	~Salt();

/*
	1. Abstract class
	2. Stores all cation and anions
*/
};

char* Salt::getAnion(int ANION)
{
	return ANIONS[ANION];
}

char* Salt::getCation(int CATION)
{
	return CATIONS[CATION];
}

int Salt::GenerateRandomAnion()
{
	randomize();
	return random(n_Anion);
}

int Salt::GenerateRandomCation()
{
	randomize();
	return random(n_Cation);
}

Salt::n_Cation = 12;
Salt::n_Anion = 10;

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
	void display();
/*
	1. Consists of general implementation of linked list queue with operations such as add, delete and traverse.
	2. It is used to hold a list of type 'Chemical' which serves as a list of reagents.
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

void ReagentQueue::display()
{
	node *trav;
	trav=front;
	
	do
	{
		trav->rev=trav->link;
		display(trav);
		trav=trav->link;
	}while(trav!=NULL);

	cout<<"\nRear="<<rear->ctr;
	cout<<"\nFront="<<front->ctr;
	
	getch();
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

class ChemicalTests
{
public:
	ChemicalTests();
	~ChemicalTests();

	ReagentQueue list;
	void ExecutePrelims();
/*
	1. Variables for reagents and conditions required 
	2. Function checkTest() to check if salt will test positively
*/
};

//----------------------------------------------------------------------------------------------------------------------------------------------------------------

class User
{
private:
	char username[];
	char password[];
	char salt[];

public:
	User();
	~User();
	int obv_num;
	char observations[100][100];
	
/*
	1. Variables for current salt, successes and failures
	2. Functions to write to binary file
	3. Function reading past tests
*/
};


User::User()
{
	obv_num = 0;
}
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