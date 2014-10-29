/*
It is always good practice to assign a null value to a pointer variable in case you do not have 
the exact address to be defined. This is done at variable declaration. A pointer that is assigned NULL is 
called a Null Pointer.

The Null Pointer is a constant with a value of zero defined in several diffrent standard libraries.
*/ 

#include <stdio.h>

int main()
{
	int *ptr = NULL;
	printf("The value of ptr is:   %x\n", ptr);

	return 0;
}







/* 
On most OS's, programs are not permitted to access memory at address 0 because it is reserved for the OS 
However the momory address 0 has special significance it signals that the pointer is not intended to point to an accessible memory location by by convention if a pointer contains the null (zero) value, it is assumed to point to nothing.

Convention over Configuration (Coding by convention) = Is a software design paradigm which seeks to decrease the number of decisions that developers need to make, 
gining simplicity, but not necessarily loosing flexibility
*/

