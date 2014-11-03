#include <stdio.h>

int main()
{
	int x = 10;

	int *pInt;	/*declaring an integer pointer*/
	float *pFloat;	/*declaring a floating point pointer*/

	void *vP = &x;	/*declaring a generic pointer vP and setting it to the address of the integer variable x which in theory should implicitily cast it to an integer pointer */

	pInt = vP;  
	pFloat = vP;

	printf("*pInt: %d\n", *pInt);  /*dereferenceing pInt  (Success!)*/

/*BUT CHECK THIS OUT Line:13 passed compilation so vP right now passed compilation vP vP right now is a pointer to a float
	So technically we can dereference them	*/
	*pFloat = 10.00;
	printf("*pFloat: %f\n", *pFloat);
	/*Success!*/
	/*What happens when we try to dereference pInt again?*/
	printf("*pInt: %d\n", *pInt
	/*It totally fucks up with some output: 1092616192
	/*What happened was the bits that represent the floating point of 10.00 were converted to an integer*/







	return 0;
}

/*

This behaviour is explained: derefrenceing a pointer that aliases the other of an incompatible type 
is undefined behaviour

Thats why you need to be careful with C, just because something is legal does not imply that it is correct 
and because it is correct now does not mean that it will be correct forever

So you always have to be careful with pointers



*/ 


