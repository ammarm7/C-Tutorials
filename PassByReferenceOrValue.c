//Tutorial 58 P)ass by variable vs Pass by reference 

#include <stdio.h>

void passByValue(int i); //prototyping
void passByAddress(int *i); //prototyping


int main()
{
	int twenty = 20;
	passByValue(twenty);
	printf("twenty is now %d\n", twenty); //It didnt change its value

	passByAddress(&twenty); //because this function takes a pointer we need to pass the memory address of twenty
	printf("twenty is now %d\n", twenty);//It changed this time!!

	return 0;
}

//Passing by value:
void passByValue(int i)
{
	i = 4; //all this function does is change any int's value to 4
	return;
}

//Pass by reference
void passByAddress(int *i)
{
	*i = 6; //dereferenced the pointer seeting its value to 6
	return;
}


/*
When the function ran as a variable it ran locally, however when the function ran as a reference it changed permadently!!

*/