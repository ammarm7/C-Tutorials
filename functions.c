//Tutorial 54 Functions
#include <stdio.h>

void printSomething(); //Prototyping the function


int main()//Main is the first FUNCTION in C that runs 
{
	printSomething(); //Where function takes place


	return 0;
}

void printSomething(){
	printf("Im a function called printSomething!!");
	
	return; //every function needs a return statement even if its type void 
}