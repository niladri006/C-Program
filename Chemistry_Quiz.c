#include <stdio.h>
#include <conio.h>
int main()
{
	printf("  \vWELLCOME TO THE QUIZ COMPITION OF CHEMISTRY  ");
	printf("\n\nSUBJECT:- BASIC CHEMISTRY.\n\n\tQUASTION TYPE :- MCQ.\n\n\tEVERY QUSTION MARK :- 1 (HAVE NO NAGATIVE MARK).");
	printf("\n\nIF YOU WANT TO PLAY THIS QUIZ, WE HAVE SOME RULE, WHICH YOU HAVE TO OBEY. \n\t\t1. IN ONE TIME ONE QUSTION WILL SHOW INTHE SCREEN. IF YOU DONT ANSWER IT THEN YOU CAN'T CORRECT IT.\n\t\t2. MCQ OPTION IS IN (1,2,3,4) SO YOU MUST BE CHOSE IN THIS. IF YOU SELECT OTHER THEN IT WILL BE WRONG.\n\t\t3. BEFORE STARTING THIS QUIZ YOU HAVE TO ENTER YOUR NAME IN THE BELLOW.");
	int score = 0;
	int answer;
	char name;
	printf("\n\nEnter Your Name  : ");
	scanf("%c", &name);

	// QUSTION NUMBER 01
	printf("\n\nQuestion 01\nWhich of the following terms are unitless ?");
	printf("\n\n(1) Molality\n(2) Molarity\n(3) Mole fraction\n(4) Mass percent\n");
	scanf("%d", &answer);
	if (answer == 3)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 02
	printf("\n\nQuestion 02\n16g of oxygen has same number of molecules as in");
	printf("\n\n(1) 16 g of CO\n(2) 28 g of N2\n(3) 14 g of N2\n(4) 1.0 g of H2\n");
	scanf("%d", &answer);
	if (answer == 3)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 03
	printf("\n\nQuestion 03\nNumber of significant Figures in the numer 1.065 ");
	printf("\n\n(1) 3 \n(2) 4\n(3) 2\n(4) 1\n");
	scanf("%d", &answer);
	if (answer == 3)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 04
	printf("\n\nQuestion 04\nHow many moles of atom are contained in 32.7 g of Zn");
	printf("\n\n(1) .200\n(2) .500\n(3) 1.50\n(4) .0118\n");
	scanf("%d", &answer);
	if (answer == 2)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 05
	printf("\n\nQuestion 05\nWhat will be the molality of the solution containing 18.25 g of HCl gas in 500 g of water ?");
	printf("\n\n(1) 0.1 m\n(2) 1 M\n(3) 0.5 m\n(4) 1 m\n");
	scanf("%d", &answer);
	if (answer == 4)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 06
	printf("\n\nQuestion 06\nWhich of the following has the largest number of atoms");
	printf("\n\n(1) 0.5 g-atoms of Cu\n(2) 0.635 g Cu\n(3) 0.25moles of Cu atoms\n(4) 1g of Cu\n");
	scanf("%d", &answer);
	if (answer == 1)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 07
	printf("\n\nQuestion 07\nA measured temperature on Fahrenheit scale is 200 �F. What will this reading be on Celsius scale ?");
	printf("\n\n(1) 40 C\n(2) 94 C\n(3) 93.3 C\n(4) 30 C\n");
	scanf("%d", &answer);
	if (answer == 3)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 08
	printf("\n\nQuestion 08\nWhich one will have maximum numbers of water molecules ?");
	printf("\n\n(1) 18 molecules of water\n(2) 1.8 grams of water\n(3) 18 grams of water\n(4) 18 moles of water\n");
	scanf("%d", &answer);
	if (answer == 4)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 09
	printf("\n\nQuestion 09\nWhich of the species is not paramagnetic ?");
	printf("\n\n(1) As+\n(2) Cl�\n(3) Ne2+\n(4) Be+\n");
	scanf("%d", &answer);
	if (answer == 2)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 10
	printf("\n\nQuestion 10\nPressure has the same dimension as ____________");
	printf("\n\n(1) energy per unit volume\n(2) energy\n(3) force per unit volume\n(4) force\n");
	scanf("%d", &answer);
	if (answer == 1)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 11
	printf("\n\nQuestion 11\nHow many structural isomers are possible if one hydrogen in diphenylmethane is replaced by chlorine ?");
	printf("\n\n(1) 8\n(2) 7\n(3) 4\n(4) 6\n");
	scanf("%d", &answer);
	if (answer == 3)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 12
	printf("\n\nQuestion 12\nWhich of the species has a permanent dipole moment ?");
	printf("\n\n(1) SF4\n(2) SiF4\n(3) BF3\n(4) XeF4\n");
	scanf("%d", &answer);
	if (answer == 3)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 13
	printf("\n\nQuestion 13\nP4O10 has ______ bridging O atoms");
	printf("\n\n(1) 4\n(2) 5\n(3) 6\n(4) 2\n");
	scanf("%d", &answer);
	if (answer == 3)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 14
	printf("\n\nQuestion 14\nWhich is the correct order of decreasing bond dissociation enthalpy ?");
	printf("\n\n(1) F2 > Cl2 > Br2 > I2\n(2) I2 > Br2 > Cl2 > F2\n(3) Cl2 > Br2 > F2 > I2\n(4) Br2 > I2 > F2 > Cl2\n");
	scanf("%d", &answer);
	if (answer == 3)
	{
		printf("THAT'S CORRECT !");
		score = score + 1;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	// QUESTION NUMBER 15
	printf("\n\nQuestion 15\nFind the amphoteric oxide ");
	printf("\n\n(1) CaO2\n(2) CO2\n(3) SnO2\n(4) SiO2\n");
	scanf("%d", &answer);
	if (answer == 3)
	{
		printf("THAT'S CORRECT !");
		score = score + 2;
	}
	else
	{
		printf("WRONG ANSWER !");
		score = score;
	}

	printf("\n\n\n  %c YOUR RESULT IS %d IN 30   ", name, score);
}
