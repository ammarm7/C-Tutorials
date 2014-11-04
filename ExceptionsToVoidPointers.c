#include <stdio.h>

int main(){
	int x = 20;
	void *vpx = &x;

 //1.
	//printf("vpx value is: %d", *vpx); 
 //2. 
	*(int *)vpx = 25;  //Casting pointers
	printf("x: %d\n", x);

//3. 
	int a = 30;
	float b = 35.00;

	int *iP; //Declared integer pointer 
	iP = &b; //initalized integer pointer to address of a float = WARNING! (incompatible pointer types)

//4. 
	void *vPoint;
	vPoint = &

//Left off at 18:37
https://www.youtube.com/watch?v=3JX6TyLOmGQ&list=PLBOteIRkQeZ2TpQT0_JoJeG_raDXa2RG5&index=11





	return 0;
}


/*

For the most part void pointers seem like every other kind of pointers

1. You can't dereference void pointers
2. We can however cast when we dereference a void pointer and that will work
(So you have to cast before you dereference a void pointer)
3. Typed pointers are only compatible with their own types when initalizing
4. Generic pointers will implicitily cast type to whatever thier assigned to






*/