#include <stdio.h>

int main()
{
	
	char fishName[50];
	char fishFood[25];
	char sentence[75] = "";
	

	puts("What was the name of the white koi you had in college? ");
	gets(fishName);

	puts("What kind of food did he eat? ");
	gets(fishFood);

	strcat(sentence, fishName); //strcat adds to a string (param1) with whats in (param2)
	strcat(sentence, " really likes eating ");
	strcat(sentence, fishFood);

	puts(sentence);



	return 0;
}

/* 

Because scanf works almost of the time
Scanf sucks because when it terminates strings with spaces

*/