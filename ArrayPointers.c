//Tutorial 44 Arrays and Pointers

#include <stdio.h>


int main()
{
	int i;
	int ballPit[5] = {5,4,5,6,7};
	//App: Prints Element values of an array and their values
	printf("Element\t\t Address\tS Value\n");
	for(i=0; i<5; i++){
		printf("ballPit[%d]\t %p\t %d\n", i, &ballPit[i], ballPit[i]);
	}

	//An Array in C is really just a pointer to its first element
	printf("ballPit[] reference: %p\n", ballPit); //Note im trynna get the address with & here
	//So if an array is really a pointer to its first element we can dereference it 
	printf("dereferenceing array: %d\n", *ballPit);
	//Dereferenceing 4th value in ballPit
	printf("4th Delivers of balls added: %d", *(ballPit+3));

	return 0;
}