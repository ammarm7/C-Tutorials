#include <stdio.h>

void change_value(int x);

int main(){

	int x = 10;
	printf("The value of x is: %d\n", x);

	printf("Address of x outside fn: %p\n", &x);
	change_value(x);
	printf("The value of x is now: %d\n", x);

	return 0;
}//endMain

void change_value(int x){
	x = 25;
	printf("The address of x in fn: %p\n", &x); //When passed by value the function has a diffrent memory address for that value 
}








/*

When you pass in a value to a function a temporary value is passed for the life of that function only


*/