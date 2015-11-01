#include "iostream.h"
#include "conio.h"
#include "stdio.h"

using namespace std;

class UserModel
{
	public:
	ReagentQueue curr;
	int ANION, CATION;

	UserModel()
	{
		load();
	}
	void generate();//Rahul sucks at writing documentation
	void save();
	void load();

	void addReagent();
	void viewQueue();
	void removeReagent();
	void execute();
	void displaySalt();
};

void UserModel::save()
{
	 ofstream fo("SaveProg.xyz", ios::binary || ios::trunc);
	 fo.write((char *) this, sizeof(*this));
	 fo.close();
}

void UserModel::load()
{
	 UserModel user;
	 ifstream fi("SaveProg.xyz", ios::binary);
	 while(fi.read((char* ) &user, sizeof(user))){
		  this = user;
	 }
	 fi.close();
}

void UserModel::generate()
{
	ANION = Salt.GenerateRandomAnion();
	CATION = Salt.GenerateRandomCation();
}

void UserModel::addReagent()
{
	curr.add();
}

void UserModel::removeReagent()
{
	curr.del();
}

void UserModel::viewQueue()
{
	curr.display();
}

void UserModel::execute()
{
	compare();
}

void UserModel::displaySalt()
{
	clrscr();
	cout<<"Salt:\nAnion: "<<Salt.getAnion(ANION)<<"\nCation: "<<Salt.getCation(CATION)<<'\n';
	getch();
}