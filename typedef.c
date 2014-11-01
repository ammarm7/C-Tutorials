#include <stdio.h>

int main()
{

	typedef unsigned long long mytypedef;

	mytypedef x = 5;
	printf("x = %llu", x);


	return 0;
}



/*
The typedef keyword will allow you to create an alternate name for a typedef

Lets say were using unsigned long long allot and we dont wanna write unsigned long long everytime




*/