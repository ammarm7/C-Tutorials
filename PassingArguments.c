//Tutorial 56 - Passing arguements into funtions
#include <stdio.h>

	void convertToDollors(float euros); //Prototype

int main()
{

	convertToDollors(50.00);


	return 0;
}

void convertToDollors(float euros)
{
	float usd = euros * 1.37;
	printf("%.2fEuros = %.2fUSD", euros, usd);

	return;
}
