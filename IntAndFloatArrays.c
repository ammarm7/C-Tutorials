#include <stdio.h>

int main(){

	int i;
	int x;
	int aIntArr[4] = {7,9,43,21}; //Populating Method 1
	int bIntArr[5];
	int totalUserInput = 0;


	//Printing aintArray
	printf("Displaying aIntArr: Populated using Method 1\n");
	for(i=0; i<4; i++){
		printf("Element: %d: %d \n", i, aIntArr[i]);
	}

	//Populating bIntArr
	for(i=0; i<5; i++){
		printf("What would you like to fill for bIntArray index: %d\n", i);
		scanf("%d", &bIntArr[i]);
	}
	//Application for averaging users input
	for(i=0; i<5; i++){
		totalUserInput += bIntArr[i];
	}
	int avg = totalUserInput/5;
	printf("You've entered a total of %d inputs, which is an average of %d\n", totalUserInput, avg);


	return 0;
}


/*
Int and Float arrays are different than Char arrays because they dont have the trailing null

*/