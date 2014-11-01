#include <stdio.h>

struct structName
{
	int age;
	int address;

};


int main()
{
	typedef struct structName typedefStructName;

	typedefStructName tdsn1;
	typedefStructName tdsn2;
	typedefStructName tdsn3;

	tdsn1.age = 20;
	tdsn2.age = 21;
	tdsn3.age = 22;

	printf("tdsn1.age = %d\n", tdsn1.age );
	printf("tdsn2.age = %d\n", tdsn2.age );
	printf("tdsn3.age = %d\n", tdsn3.age );




	return 0;
}



