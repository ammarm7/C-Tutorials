#include <stdio.h>
#include <stdlib.h>


typedef struct{	/*Create a rectangular structure*/
	int height;
	int width;
}	
rectangle_t;

rectangle_t* allocate_rectangle();	/*protoyyping gn new_rectangle*/

int main()
{
	rectangle_t *rectP;	/*declareing pointer to a struct*/
	rectP = allocate_rectangle();	/*initalizing pointer to an instance of a fn that return a pointer with a memory that weve allocated initally making it this pointer*/

	/*Because we've allocated memory and we have this pointer we can do anything we usually would with pointers*/

	rectangle_t someRectangle = *rectP;	/*Now we have a rectangle to work with because we derefrenced the pointer which got us the structure*/
	someRectangle.width = 40;
	someRectangle.height = 100;
	printf("Displaying dimesnions of rectangle %d x %d\n", someRectangle.width, someRectangle.height);

	free(rectP);

	return 0;
}

rectangle_t* allocate_rectangle(){	/*fn of type rectangle_t (struct) */
	rectangle_t *p = malloc(sizeof *p);	/*initalize a pointer of type tectangle_t (struct) using malloc to properly commit a size in memory*/
	return p;
}