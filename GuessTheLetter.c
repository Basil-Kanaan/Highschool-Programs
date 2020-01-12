#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int main() {

A:
	printf("-----------------------\n");
	int option;
	scanf("%i", &option);
	char Alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	time_t t;
	srand((unsigned)time(&t));
	
	switch (option)
	{
	case 1:
		printf("Chosen program 1\n\n");
		int b = rand() % 26;
		
		int counter = 1;
		printf("Let's see if you can guess the letter!\n\n");
	B:

		printf("");
		char L;
		scanf("%s", &L);
	
		if (Alphabet[b] == L)
		{
			printf("You got the correct letter! It took you %i try/tries.\n", counter);
			printf("Letter was: %c\n", Alphabet[b]);
			goto A;
		}
		else {
			printf("Wrong letter! Try again.\n");
			counter++;
			goto B;
		}
		goto A;

	case 2:
		break;

	default:
		printf("This is not a valid option.\n");
		goto A;
	}
	return 0;
}
