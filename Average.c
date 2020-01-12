#include <stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int a=0, b=0;		
	int close = 0;
	float num[99999], sum = 0.0, average;
		

	printf("Enter Numbers to be Averaged while pressing enter after each number.\nHit 'x' once you're done entering all your Numbers.\n\n");
						
	while(close != 'x')		
	{
		printf("Number %i: ", b+1, b);
			//Prints "Number 1: ". b = 0, 0+1 = 1. The first # is always 1. This value always increases by 1 until loop ends.
		scanf("%f %i", &num[b], &close);
			//Stores the values of b that the user enters into variable 'num'.
		sum += num[b];
			//sum = 0. "+=" means "sum+num[b]". 0+"1st #". "1st # + 2nd #" and so on.
		a++,b++;
	}

	average = sum / a;
	//variable 'average' is determined by the new 'sum' variable divided by the # of courses entered in the beginning.
	printf("The Average of your %i courses is = %.1f", a , average);
	//the first %i refers to variable 'a', and the second %i refers to variable 'average'.
	getch();
	//just something used to keep command prompt open until you hit any key, otherwise it closes before you get your answer.
	return 0;
}