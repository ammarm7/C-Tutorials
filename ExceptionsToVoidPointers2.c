/*Demonstartes a fn that returns a void point*/
#include  <stdio.h>

int main()
{
	int v1 = 20;
	float v2 = 25.00;

	void *vP;	/*declarring a void pointer*/
	vP = &v1;	/*initializing void pointer to address of integer variable v1*/

	int *pInt = vP;	/*declaring integer pointer variable and seeting it to a void pointer vP*/

	printf("*pInt: %d\n", *pInt); /*We can dereference this way because we have implicitily converted the generic pointer to that of a type*/


	return 0;
}

/*

You CANNOT convert a typed pointer to a generic pointer but you can do the opposite

*/