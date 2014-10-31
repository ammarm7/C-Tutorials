
#include <stdio.h>

int main(){

    //Any address type can be assigned to a void pointer
	int x = 20;
	float y = 25;

	void *vP; //declared void pointer
	printf("Address of vP: %p\n", vP);
	vP = &x; //Made void pointer address of x
	printf("Address of vP: %p\n", vP);

	//Any memory address can be assigned to a void pointer
	int *pInt;
	float *pFloat;

	pInt = vP; //Made an integer pointer itialize to a void pointer currently assigned to the address of x
    printf("Address of vp: %p\n", vP);

	vP = &y;  //itialized void pointer to address of y
	pFloat = vP; //itialized a float pointer to a generic pointer with the address of y
    printf("Address of vP: %p\n", vP);



	return 0;
}

/*

Also called the generic pointer, The null pointer is a contant defined as zero in several 
diffrent standard . It is always good practice to assign a null pointer to a pointer varieable 
in case you do not have the exact address to be defined. This is done at variable declaration. 
Void pointer are either of type void or initalized to NULL.
Any memory address type can be assigned to a generic pointer and any memory address can be assigned to a generic pointer
On most OS's, programs are not permitted to access memory at address 0 because it is reserved for the OS, however
the memory address ) has special significance because it signals that the pointer is not intended to point to 
a specific memory location so by convention if a pointer contains the NULL (zero) value it is assumed to point to nothing.

Convention over configuration (Coding by convention) = Is a software design paradigm which seeks to decrease the number of 
decisions that developers need to make, gaining simplicity but not neccesarily loosing flexibility.

*/

