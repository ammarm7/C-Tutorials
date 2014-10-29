//Tutorial 2 Strings and Pointers

#include <stdio.h>

int main()
{
	//By initalizing arrays like this were telling C its a Constant 
	char movie1[] = "Hitch with Will Smith";
	//We can make arrays likie this which c will consider as pointer variables, but not constants
	char * movie2 = "Click with Adam Sandler";

	puts(movie2); //This will display movie2 because puts(0 function hits this pointer containing the first memory address and keeps it moving untill it hits the trailing 0

	movie2 = "New movie tittle"; //Legal changing operation because we created the array as a pointer variable and not as a constant

	puts(movie2);


	return 0;
}


/* you can never change the name of an array by putting it 
on the left hand side like you would a variable because its not a variable its a CONSTANT 
and its a pointer to the memory address of that arrays first element 

if you want to change the name of a string which is an array of characters and an array is 
a constant and a pointer that points to its first elements address you need to use something like the strcpy function

*/