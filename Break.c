//Tutorial 29 - Using the break keyword


#include <stdio.h>

int main()
{
	int a;
	int howMany;
	int maxAmount = 10;

	printf("How many times do you want this loop to loop? (Max 10)\n");
	scanf("%d", &howMany);

	for(a=1; a<=maxAmount; a++){

		printf("%d\n", a);

		if(a==howMany){
			break;
		}
	}


	return 0;
}