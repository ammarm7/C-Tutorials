#include <stdio.h>

int main()
{
	int variable = 20; /* Actual variable declaration.*/
	int *ip; /* pointer variable declaration*/

	ip = &variable; /*store addess of variable in pointer variable ip*/

	printf(" Address of variable, &variable:   %x\n", &variable );
	printf(" Address of pointer,  &ip          %x\n", &ip );
	printf(" Address of pointer, ip:           %x\n", ip ); /*Value of pointer, where addres of variable should be stored*/
	printf(" Value of *ip variable:            %d\n", *ip ); /*Dereferenceng*/


	return 0;
}


/*

Format specifier %x vs %p:
x and X serve to output hexadecimal numbers "x" stands for lower case while "X" stand for upper case
"p" is used to printout pointer it may differ deponding on the compiler and platform


*/

