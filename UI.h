#include<iostream.h>

void DisplayUI()
{
	cout<<"-------------------------------------------------------------------------------\n";
	cout<<"\t\t\t    Salt Anaysis Simulator 1.0\n";
	cout<<"-------------------------------------------------------------------------------\n";
	cout<<"Tests/Observations:\n\n";
	cout<<"2. Sample 1\n";
	cout<<"3. Sample 1\n";
	//For loop to display history from user model
	cout<<"-------------------------------------------------------------------------------\n\n";
	cout<<"1. Add reagent to queue\n";
	cout<<"2. Remove reagent from queue\n";
	cout<<"3. View reagent queue\n";
	cout<<"4. Execute test\n";
	cout<<"5. View answer\n";
	cout<<"6. About\n";
	cout<<"7. Exit\n\n";
	cout<<"Enter choice: ";
}

void displayAbout()
{
	ifstream fi("About.txt");
	if(!fi)
	{
		cout<<"File open error";
		return;
	}
	while(!fi.eof())
	{
		fi.getline(t,80);
		cout<<t<<endl;
	}
	fi.close();

	cout<<"\n\nHit any key to continue...";
	getch();
}

void main()
{
	DisplayUI();
}

