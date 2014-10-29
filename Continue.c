#include <stdio.h>

int main()
{

	int num = 1;

	do{
		if(num==4 || num==6){
			num++;
			//continue;
		}

		printf("%d is available \n", num);
		num++;


	}while(num <= 10);

	return 0;
}