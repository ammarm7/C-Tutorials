#include <stdio.h>

float* biggest_float(float *pfloat1, float *pfloat2);


int main(){
	float x = 20.00;
	float y = 25.00;

	printf("Address of x:  %p\n", &x);
	printf("Address of y:  %p\n", &y);
	float *b = biggest_float(&x, &y);
	printf("Address of b:  %p\n", b);	


	return 0;
}

float* biggest_float(float *pfloat1, float *pfloat2){
	float *biggest;

	if(*pfloat1 > *pfloat2){ //deferenced because of manipulating values
		biggest = pfloat1;
	}
	else{
		biggest = pfloat2;
	}

	return biggest;
}





/*

Lets say we have 2 floating point variables and we want to return the address of the larger.

*/