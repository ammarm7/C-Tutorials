#include <stdio.h>
#include <stdlib.h> /* neccesarry for molloc */

int* bad_new_integer(void);
int* good_new_integer(void);

int main()
{
	int *pB;
	int *pG;
	pB = bad_new_integer();
	printf("value of *pB (Bad): %d\n", *pB);
	pG = good_new_integer();	/*This will use malloc to allocate memory for pG to our standards*/  
	*pG = 15;
	printf("value of *pG (Good): %d\n", *pG); 

	free(pG);	/*Frees the memory weve allocated for pG*/

	return 0;
}
/*How Not to allocate memory
  Whenever you declare a variable locallly within a fn it lives for the life of that fn!!!!
  Thats why we need malloc!! */
int* bad_new_integer(void){  /*void can replace nothing for paramters*/
	int x = 10;

	return &x;
}
/*
Malloc lets us allocate memory and free it unlike the above example that would leave memory for anyone else 
to fuckk wit
*/
int* good_new_integer(void){
	int *p = malloc(sizeof(int)); /*We need to allocate the size of an integer than what better amount to allocate than the size of the integer*/
	return p;	/*If all goes well this will return a pointer which will get implicitely converted to a pointer to int*/
}




/* Fn Description:

void* malloc (size_t size)

This function returns a pointer to a newly allocated block size bytes long, or a null pointer if the block 
could not be allocated


The malloc function is used to allocate a certain amount of memory during the execution of a program.
The fn requests a block of memory from the heap. If the request is granted, the OS will reserve the 
requested amount
*/






