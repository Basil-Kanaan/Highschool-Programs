#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include </usr/include/sys/io.h>
#include <unistd.h>
#include <ncurses.h>

#define BASEPORT 0x378
int GIF = 1;
int Close = 0;

int x0[100] = { 0b11111111,0b11111111,0b11111111,0b00000000,0b01101101,0b10110110,0b11011011,0b11111111,0b00000000,0b11111111 };
int x1[100] = { 0b11111111,0b11111111,0b10000001,0b01111110,0b01101101,0b10110110,0b11011011,0b00000000,0b11111111,0b11111111 };
int x2[100] = { 0b11111111,0b11000011,0b10111101,0b01111110,0b01101101,0b10110110,0b11011011,0b11111111,0b11111111,0b00000000 };
int x3[100] = { 0b11100111,0b11011011,0b10111101,0b01111110,0b01101101,0b10110110,0b11011011,0b11111111,0b00000000,0b11111111 };
int x4[100] = { 0b11100111,0b11011011,0b10111101,0b01111110,0b01101101,0b10110110,0b11011011,0b00000000,0b11111111,0b11111111 };
int x5[100] = { 0b11111111,0b11000011,0b10111101,0b01111110,0b01101101,0b10110110,0b11011011,0b11111111,0b11111111,0b00000000 };
int x6[100] = { 0b11111111,0b11111111,0b10000001,0b01111110,0b01101101,0b10110110,0b11011011,0b11111111,0b00000000,0b11111111 };
int x7[100] = { 0b11111111,0b11111111,0b11111111,0b00000000,0b01101101,0b10110110,0b11011011,0b00000000,0b11111111,0b11111111 };

int y0[100] = { 0 ^ 3,0 ^ 3,0 ^ 3,0 ^ 3 };
int y1[100] = { 0 ^ 3,0 ^ 3,1 ^ 3,1 ^ 3 };
int y2[100] = { 0 ^ 3,2 ^ 3,2 ^ 3,2 ^ 3 };
int y3[100] = { 3 ^ 3,3 ^ 3,3 ^ 3,3 ^ 3 };
int y4[100] = { 4 ^ 3,4 ^ 3,4 ^ 3,4 ^ 3 };
int y5[100] = { 0 ^ 3,5 ^ 3,5 ^ 3,5 ^ 3 };
int y6[100] = { 0 ^ 3,0 ^ 3,6 ^ 3,6 ^ 3 };
int y7[100] = { 0 ^ 3,0 ^ 3,0 ^ 3,7 ^ 3 };



int get;

int main()
{
	ioperm(BASEPORT,3,1);
	while (Close = 0)
	{
		get = getch();
		if (get == 'x') { Close = 1; }
		else if (get == LEFT_KEY) 
		{
			for (int i = 6; i >= 4; i--)
			{
				outb(x0[i], BASEPORT);
				outb((y0[3], BASEPORT + 2));
				usleep(100);
				outb(x1[i], BASEPORT);
				outb((y1[3], BASEPORT + 2));
				usleep(100);
				outb(x2[i], BASEPORT);
				outb((y2[3], BASEPORT + 2));
				usleep(100);
				outb(x3[i], BASEPORT);
				outb((y3[3], BASEPORT + 2));
				usleep(100);
				outb(x4[i], BASEPORT);
				outb((y4[3], BASEPORT + 2));
				usleep(100);
				outb(x5[i], BASEPORT);
				outb((y5[3], BASEPORT + 2));
				usleep(100);
				outb(x6[i], BASEPORT);
				outb((y6[3], BASEPORT + 2));
				usleep(100);
				outb(x7[i], BASEPORT);
				outb((y7[3], BASEPORT + 2));
				usleep(100);
				Sleep(0.5);
			}
		}
		else if (get == RIGHT_KEY) 
		{
			for (int i = 4; i <= 6; i++)
			{
				outb(x0[i], BASEPORT);
				outb((y0[3], BASEPORT + 2));
				usleep(100);
				outb(x1[i], BASEPORT);
				outb((y1[3], BASEPORT + 2));
				usleep(100);
				outb(x2[i], BASEPORT);
				outb((y2[3], BASEPORT + 2));
				usleep(100);
				outb(x3[i], BASEPORT);
				outb((y3[3], BASEPORT + 2));
				usleep(100);
				outb(x4[i], BASEPORT);
				outb((y4[3], BASEPORT + 2));
				usleep(100);
				outb(x5[i], BASEPORT);
				outb((y5[3], BASEPORT + 2));
				usleep(100);
				outb(x6[i], BASEPORT);
				outb((y6[3], BASEPORT + 2));
				usleep(100);
				outb(x7[i], BASEPORT);
				outb((y7[3], BASEPORT + 2));
				usleep(100);
				Sleep(0.5);
			}
		}
		else if(get == UP_KEY)
		{
			for (int i = 7; i <= 9; i++)
			{
				outb(x0[i], BASEPORT);
				outb((y0[3], BASEPORT + 2));
				usleep(100);
				outb(x1[i], BASEPORT);
				outb((y1[3], BASEPORT + 2));
				usleep(100);
				outb(x2[i], BASEPORT);
				outb((y2[3], BASEPORT + 2));
				usleep(100);
				outb(x3[i], BASEPORT);
				outb((y3[3], BASEPORT + 2));
				usleep(100);
				outb(x4[i], BASEPORT);
				outb((y4[3], BASEPORT + 2));
				usleep(100);
				outb(x5[i], BASEPORT);
				outb((y5[3], BASEPORT + 2));
				usleep(100);
				outb(x6[i], BASEPORT);
				outb((y6[3], BASEPORT + 2));
				usleep(100);
				outb(x7[i], BASEPORT);
				outb((y7[3], BASEPORT + 2));
				usleep(100);
				Sleep(0.5);
			}
		}
		else if(get == DOWN_KEY)
		{
			for (int i = 9; i <= 7; i--)
			{
				outb(x0[i], BASEPORT);
				outb((y0[3], BASEPORT + 2));
				usleep(100);
				outb(x1[i], BASEPORT);
				outb((y1[3], BASEPORT + 2));
				usleep(100);
				outb(x2[i], BASEPORT);
				outb((y2[3], BASEPORT + 2));
				usleep(100);
				outb(x3[i], BASEPORT);
				outb((y3[3], BASEPORT + 2));
				usleep(100);
				outb(x4[i], BASEPORT);
				outb((y4[3], BASEPORT + 2));
				usleep(100);
				outb(x5[i], BASEPORT);
				outb((y5[3], BASEPORT + 2));
				usleep(100);
				outb(x6[i], BASEPORT);
				outb((y6[3], BASEPORT + 2));
				usleep(100);
				outb(x7[i], BASEPORT);
				outb((y7[3], BASEPORT + 2));
				usleep(100);
				Sleep(0.5);
			}
		}
		else 
		{
			for (int i = 0; i <= 3; i++)
			{
				outb(x0[i], BASEPORT);
				outb((y0[i], BASEPORT + 2));
				usleep(100);
				outb(x1[i], BASEPORT);
				outb((y1[i], BASEPORT + 2));
				usleep(100);
				outb(x2[i], BASEPORT);
				outb((y2[i], BASEPORT + 2));
				usleep(100);
				outb(x3[i], BASEPORT);
				outb((y3[i], BASEPORT + 2));
				usleep(100);
				outb(x4[i], BASEPORT);
				outb((y4[i], BASEPORT + 2));
				usleep(100);
				outb(x5[i], BASEPORT);
				outb((y5[i], BASEPORT + 2));
				usleep(100);
				outb(x6[i], BASEPORT);
				outb((y6[i], BASEPORT + 2));
				usleep(100);
				outb(x7[i], BASEPORT);
				outb((y7[i], BASEPORT + 2));
				usleep(100);
				Sleep(0.5);
			}
		}	
	}
	return 0;
}