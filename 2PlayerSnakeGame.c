#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>
#include <pthread.h>

int x1=0,py1=0,x2=0,py2=0;
int P1Direction,P2Direction;

pthread_mutex_t mylock;

void *PInput1 (void *Player1);
void *PInput2 (void *Player2);


int P1Movement()
{
	int lengthP1 = 3;

	char Snake[100][100] = {"0","o"," "};

	int P1Input = getch();

	if(P1Input == 'w') 
	{
		P1Direction = 1;
	}	
	if(P1Input == 's')
	{
		P1Direction = 2;
	}
	if(P1Input == 'd')
	{
		P1Direction = 3;
	}
	if(P1Input == 'a')
	{
		P1Direction = 4;
	}

	switch(P1Direction)
	{
		case 1:
		py1--;
		break;
		
		case 2:
		py1++;
		break;
		
		case 3:
		x1++;
		break;
		
		case 4:
		x1--;
		break;

	}
	
	if(py1< -24)
	{
	py1=24;
	}
	
	//for(int xy = 0; xy < lengthP1 ; xy++ )
	//{	
		mvprintw(25+py1,36+x1,"0");
		refresh();
	//}
}
/*
int P2Movement()
{

	int P2Input = getch();

	if(P2Input == 'i') 
	{
		P2Direction = 1;
	}
		
	if(P2Input == 'k')
	{
		P2Direction = 2;
	}

	if(P2Input == 'l')
	{
		P2Direction = 3;
	}
	
	if(P2Input == 'j')
	{
		P2Direction = 4;
	}

	switch(P2Direction)
	{
		case 1:
		py2--;
		break;
		
		case 2:
		py2++;
		break;
		
		case 3:
		x2++;
		break;
		
		case 4:
		x2--;
		break;
	}
	
	mvprintw(25+py2,114+x2,"0");
	refresh();

}
*/
int main(void)
{
	char close = 'o';

	initscr();
	curs_set(0);
	noecho();
	timeout(1);
	cbreak();
	//wresize(1,20,20);
	//resizeterm(50,50);


	pthread_t PI1;
	pthread_create(&PI1 , NULL, PInput1 , NULL);
	
	//pthread_t PI2;
	//pthread_create(&PI2 , NULL, PInput2 , NULL);

	box(stdscr,'*','*');

	while(close != 'x')
	{
	
		//refresh();
		usleep(100000);
		pthread_mutex_lock(&mylock);
		close = getch();
		pthread_mutex_unlock(&mylock);
	}

	endwin();

	return 0;
}

void *PInput1 (void *Player1)
{
	while(1)
	{
	usleep(100000);
	pthread_mutex_lock(&mylock);
	//erase();
	P1Movement();
	pthread_mutex_unlock(&mylock);
	
	}
}

/*
void *PInput2 (void *Player2)
{
	while(1)
	{

	usleep(100000);
	pthread_mutex_lock(&mylock);
	//erase();
	P2Movement();
	refresh();
	pthread_mutex_unlock(&mylock);
	
	}
}
*/

