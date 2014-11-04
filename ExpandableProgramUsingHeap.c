#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, howMany;	
	int total = 0;
	int avg = 0;
	int* pointersArray;	/*declaring integer pointer "pontersArray"*/

	printf("How many numbers do you want to average?\n");
	scanf("%d", &howMany);

	pointersArray = (int *) malloc(howMany * sizeof(int)); /*allocating enough space neccesary to hold user integers based on how many they need*/
	/*Now we can treat pointersArray like a normal array but its kind of cool because the user helped in creating it */

	printf("Put yo numbas up!!\n");

	for(i=0; i<howMany; i++){
		scanf("%d", &pointersArray[i]);
		total += pointersArray[i];
	}

	avg = total / howMany;
	printf("The average is %d\n", avg);


	return 0;
}



/*
Program for user to average numbers using help from the user to allocate its memory.

*/