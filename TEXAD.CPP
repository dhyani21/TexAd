/* Author: Dhyani Desai
   TexAd: Text Adventure Game
   January 2021 	*/


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
main()
{
	int ch, candyworld(), middle_school();
	char pname[10];
	system("cls");
	cout<<"Hello there, Welcome to TexAd. \nPlease enter your name: ";
	cin.getline(pname,10);

	cout<<"\nHey "<<pname<<", Let's begin the game.";
	cout<<"\nPlease select a map: ";
	cout<<"\n1. The Candy World \n2. The Middle School  ";
	cin>>ch;
	if(ch == 1)
	{
		candyworld();
	}
	else if(ch == 2)
	{
		middle_school();
	}
	else
	{  	cout<<"\nExit..";
	}
	getch();
	return 0;
}

int candyworld()
{
	int ch1,ch2,ch3,ch4,arr=0,m1,m2;
	system("cls");
	cout<<"\n\tWelcome to the sweet and tasty world of CANDIES.";
	cout<<"\nAll around you see is the colorful and mouth-watering candies.But remember 'all that shines is not gold' ";
      entry:
      //label for entry point
	cout<<"\nTo your right is the chocolate room and to the left is room full of gummies.";
	cout<<"\nAlso, you have a way ahead leading to bubble and cotton candy rooms.";
	cout<<"\nWhere would you like to go? \n1. Left?\t2. Right?\t3. Forward? ";
	cin>>ch1;
	if(ch1 == 1)
	{    gummy:
		cout<<"\nWelcome to the Gummies Room";
		cout<<"\nOh no, your legs are stuck, and you cannot move.";
		cout<<"\n\tGame Over";

	}
	else if(ch1 == 3)
	{
	   cout<<"\nYou have two ways ahead:";
	   cout<<"\nWhat is your pick? \n1. Bubble Room \t\t2. Cotton candy room";
	   cin>>ch4;
	   if(ch4 == 1)
	   {
		goto bubble;
	   }
	   if(ch4 == 2)
	   {
		goto cotton;
	   }
	 }
	else if(ch1 == 2)
	{
		cout<<"\nHow does it feel to be in the chocolate room?? \nSo the room is full of chocolates obviously, but wait... ";
		cout<<"\nHere are a few weird things like\n1. a book,\n2. a sword,\n3. a pen,\n4. a shoe and\n5. a water bottle";
		cout<<"\nWhat is your pick? ";
		cin>>arr;
		cout<<"\nMoving ahead is the way to Bubble room and you can also move back to entry point.";
		cout<<"\nSo what is your next move??";
		cout<<"\n1. Backward \t2. Forward ";
		cin>>ch2;
		if(ch2 == 1)
		{
			goto entry;
		}
		if(ch2 == 2)
		{
		   bubble:
		   //label for bubble room
			cout<<"\nWelcome to bubble room";
			cout<<"\nBeware of the monster here. You need a sword to kill the monster.";
			cout<<"\nThe monster is attacking... What is your move?\n1. Kill? \t2. Run? ";
			cin>>m1;
			if(m1 == 1)
			{
				if(arr == 2)
				{
					cout<<"\nWoohoo, Congratulations!! You WON!!!";

				}
				else
				{
					cout<<"\nOOPS! You didn't had weapon to kill the monster. \n\t\tGAME OVER";

				}
			}

			if(m2 == 2)
			{
				cotton:
				//label for cotton candy room
				cout<<"\nWelcome to the room of cotton candy!\nAll around you can see colorful cotton candies";
				cout<<"\nBut wait, something is approaching you...\nUh oh, It is the cotton candy demon!!";
				cout<<"\nIt can be killed by water.";
				cout<<"\nWhat would you do? \n1. Kill \t\t2. Run  ";
				cin>>ch3;
				if(ch3 == 1)
				{
						if(arr == 5)
						{
							cout<<"\nCongratulations! You won!";

						}
						else
						{
							cout<<"Game over!! You lost!";

						}
				}

				if(ch3 == 2)
				{
				       goto gummy;
					//label for gummy room
				}
				return 0;

			}
			return 0;
		}


	return 0;
      }
}


int middle_school()
{
	int s1,a1,a2,weapon = 0,s2,s3,w2 = 0,s4,s5,s6;
	system("cls");
	cout<<"\nHello Student.";
	cout<<"\nSo you are standing in the middle of the long hallway.";
	cout<<"\nYou look around and see Maths class at your right and see a long hallway ahead.";
	delay(120);
	entry:
	//entry label
	cout<<"\nSo where do you want to go??  ";
	cout<<"\n1. Maths Class \t\t2. Ahead  ";
	cin>>s1;
	if(s1 == 2)
	{
		cout<<"\nWhat is your next choice?";
		cout<<"\n1. Principal's Office \n2. English Class \n3. Science Class   ";
		cin>>s6;
		if(s6 == 1)
		{
			goto office;
		}
		else if(s6 == 2)
		{
			goto english;
		}
		else
		{
			goto science;
		}
	}
	else if(s1 == 1);
	{      maths:
		//maths label
		cout<<"\nWelcome to Maths Class!! ";
		cout<<"\nYou have to answer some questions in order to escape";
		cout<<"\nSo are you ready??";
		delay(450);
		cout<<"\nWhat is the first natural number?  ";
		cin>>a1;
		if(a1 == 1)
		{
			cout<<"\nCorrect!";
		}
		else
		{
			cout<<"\n\tWrong Answer!";
		}
		cout<<"\nNext question: \n What is the largest 2 digit number?  ";
		cin>>a2;
		if(a2 != 99)
		{
			cout<<"\nwrong answer! \t\t\tGAME OVER";

		}
		else
		{
			cout<<"\nCongratulations. You get a grammar dictionary as a reward";
			weapon = 1;
		}
		cout<<"\n Now you have 2 choices:";
		cout<<"\n To enter the next class or go to the Hallway. ";
		cout<<"\n 1. Hallway? \t\t 2. Next class  ";
		cin>>s2;
		if(s2 == 1)
		{
			goto  entry;
		}
		if(s2 == 2)
		{       english:
			//english class label
			cout<<"\nSo now you are in English Class";
			cout<<"\nUh oh, here you encounter the grammar nosy demon!!";
			delay(250);
			cout<<"You can win over it with the help of a Grammar Dictionary.";
			cout<<"\nSo what's your move?? \n1.Fight \t\t\t 2. Escape to maths class   ";
			cin>>s3;
			if(s3 == 1)
			{
				if(weapon == 1)
				{
					cout<<"\nYou win!! \nLet's move ahead";
				}
				else
				{
					cout<<"\nYou lost! \n\t\t GAME OVER";
					exit(20);
				}
			}
			else if(s3 == 2)
			{
				goto maths;
			}
			else
			{
				goto entry;
			}
			science:
			cout<<"\nSo, moving ahead we are in the science class. ";
			cout<<"\nThe class is full of objects like: ";
			cout<<"\n1. P.T uniform \n2. Telescope \n3.Note signed by Parents  \n4. Microscope   ";
			cout<<"\nWhat is your pick? ";
			cin>>w2;
			cout<<"\nNow you have the following options: ";
			cout<<"\n1. Go to Hallway \n2. Go to next class  ";
			cin>>s4;
			if(s4 == 1)
			{
				goto entry;
			}
			else if(s4 == 2)
			{
				office:
				cout<<"\nSo you've landed in principal's office.";
				cout<<"\nAnd he asks for your parent's signature or else you are punished.";
				cout<<"\n1. Show note \t\t\t2. Apologize  ";
				cin>>s5;
				if(s5 == 1)
				{
					if(w2 == 3)
					{
						cout<<"You win the game! Congratulations!!";
						delay(240);

					}
					else
					{
						cout<<"\nYou lost";
					}
				}
				else if(s5 == 2)
				{
					cout<<"\nApologies aren't accepted";
					cout<<"\nYou lost";
					delay(250);

				}
			}
		}
	}



return 0;
}
