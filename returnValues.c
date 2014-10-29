#include <stdio.h>

int calculateBonus(int yearsWorked); //Prototyping function


int main()
{

	printf("Ammar makes: %d\n", calculateBonus(20));

	return 0;
}

int calculateBonus(int yearsWorked){
	int bonus = yearsWorked * 300;

	if(yearsWorked > 10){
		bonus += 10000;
	}
	return bonus; 
}