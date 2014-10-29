#include <stdio.h>

int* return_me(int* pint); //Stating that this will return a pointer to an integer, and also passing in the memory address of an int

int main(){
	int x = 10;
	int *p = &x;

	printf("p: %p\n", p);

	p = return_me(p);
	printf("p: %p\n", p);  //Stayed the same!



	return 0;
}

int* return_me(int* pint){
	return pint;
}


/*

https://www.youtube.com/watch?v=3JX6TyLOmGQ



*/