#include <stdio.h>


int main()
{
	int intVar = 50;
	int *pIntVar = &intVar; //using * to make a pointer variable and setting it to the adress of a int variavble
	//Displaying variable & pointer stats
	printf("Pointer to Address of intVar:              %p\n", &intVar);
	printf("Pointer to intVar:                         %p\n", intVar);
	printf("Value of intVar:                           %d\n", intVar);
	printf("\n");
	printf("Pointer to Address of pIntVar:             %p\n", &pIntVar);
	printf("Pointer to pIntVar:                        %p\n", pIntVar);
	printf("Value of pIntVar:                          %d\n", pIntVar);

	//Dereferenceing pointer 
	printf("*pIntVar: %d\n", *pIntVar);

	//Changing the value of pointer pIntVar
	*pIntVar = 20; //Only Changing the pointers variable
	//Changing the pointer actually aslo changes the variable remember the address of that variable is the pointer
	printf("The value of pIntVar is now: %d\n", *pIntVar);
	printf("The value of intVar is now: %d\n", intVar);


	return 0;

}

/*
int * was what we used to define an int pointer pTuna

*pTuna was how we dereference its value 

I noticed that using the conversion character to get the value of pIntVar printed a weird result 

However derewfer4enceing it using the * made all the diffrence

*/