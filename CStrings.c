/*Notice the trailing NULL*/
#include <stdio.h>
#include <string.h>

int main()
{
	char firstName[100] = {'A','M','M','A','R'}; //The C compiler will have already have placed the '/O'
	char lastName[8] = {'M','O','H','A','M','E','D'}; //not initalized still worked..

	printf("My first name is: %s\n", firstName);
	printf("My last name is: %s\n", lastName);

	strcpy(firstName," Mohamed");

	printf("My whole name is: %s", firstName);


	return 0;
}
