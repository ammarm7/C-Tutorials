#include <stdio.h>

void change_value(int *); //prototyping a void fn that takes in a pointer

int main(){
	int x = 20;

	printf("Value of x: %d\n", x);
	change_value(&x);
    printf("Value of x: %d\n", x);


	return 0;
}//endMain

void change_value(int *p){ //Takes in a pointer
	*p = 25;
}