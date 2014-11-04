#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;	/*Creates an integer pointer that will point to the first item in the heap*/
	p = (int *) malloc(5*sizeof(int));	/*allocate memory from the heap, will allow enough memory for 5 integers, (Note: typcast pointer for integers*/

	free(p);	/*giving back the heap*/



	return 0;
}


/*

Up untill this point the memory we've used was setup by the variables we've declarred 
But what if we need more memory than our variables have declarred?
Like if we needed to make a program to keep track of someones employees but we don't know many employees they have


Heap is left over memory not being used by applications, its extra memory you can borrow

*/