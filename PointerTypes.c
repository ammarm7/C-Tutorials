/*POINTERS

Some C programming tasks are performed more easily with pointers,
and other taks such as dynamic memory allocation, cannot be performed without usig pointers



Every Variabe has a memory location and every memory location has its address defined which can be accessed
useing the ampersand operator (&)

*/

#include <stdio.h>

int main ()
{
    int variable1;
    char variable2[10];

    printf("Address of variable1: %x\n", &variable1 );
    printf("Address of variable2: %x\n", &variable2 );

    int *ip;     //pointer to an integer
    double *dp;  //Pointer to a double
    float *fp;   //pointer to a float
    char *ch;    //pointer to a char



    return 0;
}

/*

A pointer is a Variable whose value is the address of another variable.

Theres a few important operations you need pointers to do on a frequent basis:
How to use them:

1. Define a pointer variable
2. Assign the address of the variable to a pointer
3. Access the variable at its address using the pointer variable


*/
