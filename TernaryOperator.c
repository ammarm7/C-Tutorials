//Ternary Operation

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char firstName[20];
	char lastName[20];
	int friends;
	printf("Enter your first name: \n");
	scanf("%s", firstName);
	(firstName[0] == 'A' ? printf("Your name starts with A\n") : printf("Doesn't start with A\n")); 

	//Program to sort student in a lab
	printf("Whats your last name?\n");
	scanf("%s",lastName);
	(lastName[0] < 'M' ? printf("Your in Lab 1\n") : printf("Your in Lab 2\n"));

	//Easily Navigating through the english language
	printf("How many friends do you have?\n");
	scanf("%d", &friends);
	printf("You have %d friend%s\n", friends, (friends == 1 ? "" : "s"));


	return 0;
}


/*
Purpose: Using the ternary operator and judging character hierchy

*/