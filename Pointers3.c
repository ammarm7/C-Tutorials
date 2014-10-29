#include <stdio.h>

int main()
{

	int x = 10;
	int *p;

	p = &x;

    //Printing out details of X relationship with p
	printf("The value of x:                %d\n", x);
	printf("The address of x:              %p\n", &x);
	printf("The address of x by pointer:   %p\n", p);
	printf("The value of p:                %d\n", *p); //dereferenceing value
	printf("The value of x:                %d\n", *&x); //dereferenced value

	//Changing value by dereferenceing pointer
	*p = 20;
	printf("The value of x:  %d\n", *p);
	printf("The value of x:  %d\n", x); //In both cases X was changed
	

	return 0;
}
