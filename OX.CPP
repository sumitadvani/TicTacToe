#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<dos.h>
#include<stdio.h>

void nextgame();

void main()
{

 clrscr();
 char p1[15],p2[15],n[9],m[9],c,ch;
 int i,j,x,y,a[9],b[9];
 char intr[]="#Created By:-";
 char name[]="SUMIT ADVANI";
 textcolor(15);
 gotoxy(29,11);

	for(i=0;intr[i]!='\0';i++)
	{
		cout<<intr[i]<<" ";
		delay(300);
	}
 gotoxy(29,14);

	for(i=0;name[i]!='\0';i++)
	{
		textcolor(i+2);
		cprintf("%c",name[i]);
		cout<<" ";
		delay(300);
	}
 textcolor(15);
 clrscr();
 cout<<"\n\n\n\n\n\n\n";

	for(i=0;i<80;i++)
	{
		textcolor(1);
		cprintf("*");
	}
 textcolor(15);
 cout<<"\n\n\t   ";
 textcolor(10+BLINK);
 cprintf("T H E   F A M O U S   T I C   T A E   T O E   G A M E ");
 cout<<"\n\n\n";
	for(i=0;i<80;i++)
	{
		textcolor(1);
		cprintf("*");
	}
 textcolor(15);
 delay(3000);
 clrscr();
 cout<<"\n\n";

	for(i=0;i<80;i++)
	{
		textcolor(1);
		cprintf("*");
	}
 textcolor(15);
 cout<<"\n\n\t   ";
 textcolor(10+BLINK);
 cprintf("R U L E S   O F   P L A Y I N G   T H E   G A M E ");
 cout<<"\n\n\n";
	for(i=0;i<80;i++)
	{
		textcolor(1);
		cprintf("*");
	}
 cout<<"\n";
 textcolor(15);

 cout<<"1.  According to this game two players are must required.\n\n";
 cout<<"2.  The characters used should be necessarily 'o' and 'x'\n\n";
 cout<<"3.  For moving in the boxes of game go in following way :-\n\n";
 cout<<"         _________________________________________\n";
 cout<<"        |  A = Left              S = Right        |\n";
 cout<<"        |  W = Up                Z = Down         |\n";
 cout<<"        |_________________________________________|";
 cout<<" \n\nPress any key......";
 getch();

 clrscr();

 cout<<"\n\n";
 cout<<"Enter the name of two players :-\n\n";
 cout<<"\tPlayer 1   =   ";
 gets(p1);
 cout<<"\n";
 cout<<"\tPlayer 2   =   ";
 gets(p2);
 cout<<"\n\n";

  lb:

 clrscr();

 cout<<"\n\n  Player 1  =>  Enter the character you want 'o' or 'x'\n   ";
 cin>>c;
 cout<<"\n\n";
	if(c=='o'||c=='O')
	{
		cout<<" So, Player 1 gets :-  "<<c;
		cout<<"\n\n\n And Player 2 gets :-  x";
	}
	else if(c=='x'||c=='X')
	{
		cout<<" So, Player 1 gets :-  "<<c;
		cout<<"\n\n\n And Player 2 gets :-  o";
	}
	else
	{
		cout<<" !!! WRONG CHOICE !!! \n\n    Enter again player 1.";
		delay(1000);
		goto lb;
	}
 cout<<"\n\n\n\t\tAre you ready to play ??? (y / n)\n\n\t\t";
 cin>>ch;
	if(ch=='y'||ch=='Y')
	{
		for(i=1;i<=55;i++)
		{
			clrscr();
			gotoxy(1,10);
			textcolor(10);
			cprintf("Please wait loading ");
			for(j=1;j<=i;j++)
			{
				textcolor(9);
				cprintf("*");
				textcolor(15);
			}
			cout<<"\n "<<(i*100)/55<<"%";
			delay(100);
		}
	}
	else
	{
		cout<<"\n\n\n\t\t\t";
		textcolor(4);
		cprintf("A B O R T I N G !!!");
		textcolor(15);
		delay(2000);
		exit(0);
	}

 clrscr();

	for(i=0;i<2;i++)
	{
		gotoxy(34,9+i);
		textcolor(1);
		cprintf("|      |");
		textcolor(15);
	}
 gotoxy(29,11);

	for(i=0;i<19;i++)
	{
		textcolor(1);
		cprintf("-");
		textcolor(15);
	}

	for(i=0;i<2;i++)
	{
		gotoxy(34,12+i);
		textcolor(1);
		cprintf("|      |");
		textcolor(15);
	}
 gotoxy(29,14);

	for(i=0;i<19;i++)
	{
		textcolor(1);
		cprintf("-");
		textcolor(15);
	}

	for(i=0;i<2;i++)
	{
		gotoxy(34,15+i);
		textcolor(1);
		cprintf("|      |");
		textcolor(15);
	}
 textcolor(15);
 gotoxy(37,12);
  x=37;
  y=12;



	for(j=0;j<9;j++)
	{
		for(i=0;i<1;)
		{
			 mb:
			 cb:
			ch=getch();


			if(ch=='a'||ch=='A')
			{
				if(x==31 && y==9)
					gotoxy(x+=12,y);
				else if(x==31 && y==12)
					gotoxy(x+=12,y);
				else if(x==31 && y==15)
					gotoxy(x+=12,y);
				else
					gotoxy(x-=6,y);
			}

			if(ch=='s'||ch=='S')
			{
				if(x==43 && y==9)
					gotoxy(x-=12,y);
				else if(x==43 && y==12)
					gotoxy(x-=12,y);
				else if(x==43 && y==15)
					gotoxy(x-=12,y);
				else
					gotoxy(x+=6,y);
			}

			if(ch=='w'||ch=='W')
			{
				if(x==31 && y==9)
					gotoxy(x,y+=6);
				else if(x==37 && y==9)
					gotoxy(x,y+=6);
				else if(x==43 && y==9)
					gotoxy(x,y+=6);
				else
					gotoxy(x,y-=3);
			}

			if(ch=='z'||ch=='Z')
			{
				if(x==31 && y==15)
					gotoxy(x,y-=6);
				else if(x==37 && y==15)
					gotoxy(x,y-=6);
				else if(x==43 && y==15)
					gotoxy(x,y-=6);
				else
					gotoxy(x,y+=3);
			}



			if(ch=='o'||ch=='O')
			{


				if(j==0)
				{
					if(ch!=c)
					{
						gotoxy(2,2);
						cout<<" SORRY FIRST TURN IS OF 'X'";
						gotoxy(x,y);
						goto mb;
					}
				}



				textcolor(5);
				cprintf("o");



				if(x==31,y==9)
				{
					a[j]=x;
					b[j]=y;
					m[j]='o';
				}

				else if(x==37,y==9)
				{
					a[j]=x;
					b[j]=y;
					m[j]='o';
				}

				else if(x==43,y==9)
				{
					a[j]=x;
					b[j]=y;
					m[j]='o';
				}

				else if(x==31,y==12)
				{
					a[j]=x;
					b[j]=y;
					m[j]='o';
				}

				else if(x==37,y==12)
				{
					a[j]=x;
					b[j]=y;
					m[j]='o';
				}

				else if(x==43,y==12)
				{
					a[j]=x;
					b[j]=y;
					m[j]='o';
				}

				else if(x==31,y==15)
				{
					a[j]=x;
					b[j]=y;
					m[j]='o';
				}

				else if(x==37,y==15)
				{
					a[j]=x;
					b[j]=y;
					m[j]='o';
				}

				else if(x==43,y==15)
				{
					a[j]=x;
					b[j]=y;
					m[j]='o';
				}



				break;
			}
			textcolor(15);



			if(ch=='x'||ch=='X')
			{


				if(j==0)
				{
					if(ch!=c)
					{
						gotoxy(2,2);
						cout<<" SORRY FIRST TURN IS OF 'O'";
						gotoxy(x,y);
						goto mb;
					}
				}



				textcolor(5);
				cprintf("x");



				if(x==31,y==9)
				{
					a[j]=x;
					b[j]=y;
					m[j]='x';
				}

				else if(x==37,y==9)
				{
					a[j]=x;
					b[j]=y;
					m[j]='x';
				}

				else if(x==43,y==9)
				{
					a[j]=x;
					b[j]=y;
					m[j]='x';
				}

				else if(x==31,y==12)
				{
					a[j]=x;
					b[j]=y;
					m[j]='x';
				}

				else if(x==37,y==12)
				{
					a[j]=x;
					b[j]=y;
					m[j]='x';
				}

				else if(x==43,y==12)
				{
					a[j]=x;
					b[j]=y;
					m[j]='x';
				}

				else if(x==31,y==15)
				{
					a[j]=x;
					b[j]=y;
					m[j]='x';
				}

				else if(x==37,y==15)
				{
					a[j]=x;
					b[j]=y;
					m[j]='x';
				}

				else if(x==43,y==15)
				{
					a[j]=x;
					b[j]=y;
					m[j]='x';
				}



				break;
			}
			textcolor(15);
		}



		if(j>0)
		{
			if(m[j]==m[j-1] && j%2==0)
			{
				gotoxy(30,18);
				cout<<"Wrong choice by "<<p1<<". Enter again...";
				j--;
				gotoxy(x,y);
				cout<<" ";
			}

			else if(m[j]==m[j-1] && j%2)
			{
				gotoxy(30,18);
				cout<<"Wrong choice by "<<p2<<". Enter again...";
				j--;
				gotoxy(x,y);
				cout<<" ";
			}
		}



		for(int k=0;k<j;k++)
		{
			if(a[j]==a[k] && b[j]==b[k] && ch=='o')
			{
				gotoxy(30,20);
				cout<<"ILLEGAL MOVE by "<<p1<<". Enter again...";
				gotoxy(x,y);
				cout<<"x";
				goto mb;
			}

			else if(a[j]==a[k] && b[j]==b[k] && ch=='x')
			{
				gotoxy(30,20);
				cout<<"ILLEGAL MOVE by "<<p2<<". Enter again...";
				gotoxy(x,y);
				cout<<"o";
				goto mb;
			}
		}



		if(x==31 && y==9)
			n[0]=m[j];

		else if(x==37 && y==9)
			n[1]=m[j];

		else if(x==43 && y==9)
			n[2]=m[j];

		else if(x==31 && y==12)
			n[3]=m[j];

		else if(x==37 && y==12)
			n[4]=m[j];

		else if(x==43 && y==12)
			n[5]=m[j];

		else if(x==31 && y==15)
			n[6]=m[j];

		else if(x==37 && y==15)
			n[7]=m[j];

		else if(x==43 && y==15)
			n[8]=m[j];



		if(j>=4)
		{
			//for 'o' as a winner...

			if(n[0]==n[1] && n[1]==n[2] && j%2==0)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 1  { %s }",p1);
				textcolor(15);
				break;
			}

			else if(n[3]==n[4] && n[4]==n[5] && j%2==0)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 1  { %s }",p1);
				textcolor(15);
				break;
			}

			else if(n[6]==n[7] && n[7]==n[8] && j%2==0)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 1  { %s }",p1);
				textcolor(15);
				break;
			}

			else if(n[0]==n[3] && n[3]==n[6] && j%2==0)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 1  { %s }",p1);
				textcolor(15);
				break;
			}

			else if(n[1]==n[4] && n[4]==n[7] && j%2==0)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 1  { %s }",p1);
				textcolor(15);
				break;
			}

			else if(n[2]==n[5] && n[5]==n[8] && j%2==0)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 1  { %s }",p1);
				textcolor(15);
				break;
			}

			else if(n[0]==n[4] && n[4]==n[8] && j%2==0)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 1  { %s }",p1);
				textcolor(15);
				break;
			}

			else if(n[2]==n[4] && n[4]==n[6] && j%2==0)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 1  { %s }",p1);
				textcolor(15);
				break;
			}


			//for 'x' as a winner
			else if(n[0]==n[1] && n[1]==n[2] && j%2)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 2  { %s }",p2);
				textcolor(15);
				break;
			}

			else if(n[3]==n[4] && n[4]==n[5] && j%2)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 2  { %s }",p2);
				textcolor(15);
				break;
			}

			else if(n[6]==n[7] && n[7]==n[8] && j%2)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 2  { %s }",p2);
				textcolor(15);
				break;
			}

			else if(n[0]==n[3] && n[3]==n[6] && j%2)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 2  { %s }",p2);
				textcolor(15);
				break;
			}

			else if(n[1]==n[4] && n[4]==n[7] && j%2)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 2  { %s }",p2);
				textcolor(15);
				break;
			}

			else if(n[2]==n[5] && n[5]==n[8] && j%2)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 2  { %s }",p2);
				textcolor(15);
				break;
			}

			else if(n[0]==n[4] && n[4]==n[8] && j%2)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 2  { %s }",p2);
				textcolor(15);
				break;
			}

			else if(n[2]==n[4] && n[4]==n[6] && j%2)
			{
				delay(1000);
				clrscr();
				gotoxy(25,12);
				textcolor(10+BLINK);
				cprintf("THE WINNER IS PLAYER 2  { %s }",p2);
				textcolor(15);
				break;
			}


			//for tie between both the players...

			if(j==8)
			{
				if(!((n[0]==n[1] && n[1]==n[2] && (j%2==0||j%2))
				&&(n[3]==n[4] && n[4]==n[5] && (j%2==0||j%2))
				&&(n[6]==n[7] && n[7]==n[8] && (j%2==0||j%2))
				&&(n[0]==n[3] && n[3]==n[6] && (j%2==0||j%2))
				&&(n[1]==n[4] && n[4]==n[7] && (j%2==0||j%2))
				&&(n[2]==n[5] && n[5]==n[8] && (j%2==0||j%2))
				&&(n[0]==n[4] && n[4]==n[8] && (j%2==0||j%2))
				&&(n[2]==n[4] && n[4]==n[6] && (j%2==0||j%2))))
				{
					delay(1000);
					clrscr();
					gotoxy(25,12);
					textcolor(10+BLINK);
					cprintf("THERE IS TIE BETWEEN BOTH THE PLAYERS");
					textcolor(15);
					break;
				}
			}
		}
	}
	textcolor(15);
	delay(4000);

	 ab:
	clrscr();
	cout<<"Want to play another game (y/n) : -    ";

	char ag;
	cin>>ag;


	if(ag=='y'|| ag=='Y')
		nextgame();

	else if(ag=='n'|| ag=='N')
	{
		textcolor(11);
		cout<<"\n\n\n\t\t\t";
		cprintf("...THANK YOU...");
		cout<<"\n\n\t\t\t";
		cprintf("! FOR PLAYING !");
		textcolor(15);
	}

	else
	{
		cout<<"\n\n\nWrong choice...";
		goto ab;
	}

 getch();

}



void nextgame()
{
	main();
}