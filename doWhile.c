//Tutorial 26 doWhile

#include <stdio.h>

int main()
{

	float grade = 0;
	float scoreEntered = 0;
	float numberOfTests = 0;
	float average = 0;

	printf("Press 0 when complete. \n\n");

	do{//Runs at least once!!
		printf("Tests:%.0f   Average:%.2f  \n", numberOfTests, average);
		printf("\nEnter test score: ");
		scanf("%f", &scoreEntered);
		grade += scoreEntered;
		numberOfTests++;
		average = grade / numberOfTests;
	}while(scoreEntered != 0);



	return 0;
}