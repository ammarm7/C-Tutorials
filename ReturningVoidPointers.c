// Demonstarte a simple function that returns a void pointer
#include <stdio.h>

void* return_me(int *pInt);

int main(){
	int x =10;
	int *p = &x;

	printf("Pointer p: %p\n", p);
	p = return_me(p);
	printf("Pointer p: %p\n", p);

	return 0;
}


void* return_me(int *pInt){
	return pInt;
}

/*

Remember void pointer can be assigned any type of pointer

Why wouldn't you use void everytime?
	It's just a better stye and better practice to be more explicit.....


*/