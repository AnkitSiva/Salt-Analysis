int ch=0;
char CATION[12][20]={"Aluminium","Ammonium","Barium","Calcium","Copper","Ferric","Lead","Magnesium","Manganese","Nickel","Strontium","Zinc"};
char ANION[10][10]={"Nitrate","Phosphate","Acetate","Bromide","Chloride","Sulphate","Oxalate","Carbonate","Iodide","Sulphide"};

void prelims()
{
	cout<<"Execute preliminary tests\n";
	if(VirtUser.CATION==5||VirtUser.CATION==6||VirtUser.CATION==9||VirtUser.CATION==10)
	{
		if(VirtUser.CATION==5)
			strcpy(observations[0][],"Colour: Blue");

		else if(VirtUser.CATION==6)
			strcpy(observations[0][],"Colour: Brown");

		else if(VirtUser.CATION==9)
			strcpy(observations[0][],"Colour: Pink");

		else if(VirtUser.CATION==10)
			strcpy(observations[0][],"Colour: Green");

		else
			strcpy(observations[0][],"Colourless");
	}

	
	if(VirtUser.CATION==2||VirtUser.ANION==3||VirtUser.ANION==10)
	{
		if(VirtUser.CATION==2)
			strcpy(observations[1][],"Smell: Ammonical");

		else if(VirtUser.ANION==3)
			strcpy(observations[1][],"Smell: Vinegar");

		else if(VirtUser.ANION==10)
			strcpy(observations[1][],"Smell: Rotten Eggs");

		else
			strcpy(observations[1][],"Odourless");
	}

	
	if(!VirtUser.CATION==7)
	{
		if(!VirtUser.CATION==7)
		{
			strcpy(observations[2][],"Soluble in Water");
			strcpy(observations[3][],"Soluble in HCL");
		}
		else
		{
			strcpy(observations[0][],"Insoluble in Water");
			strcpy(observations[4][],"Insoluble in HCl");
		}
	}


	//Flame test. 
}

