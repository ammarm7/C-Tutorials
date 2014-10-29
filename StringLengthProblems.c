//Tutorial 46 Problems with string lengths

#include <stdio.h>

int main()
{
	char movie[20]; // a character array (or string) with a max of 20 character slots
	char * pMovie = movie; //Created a pointer variable  

	fgets(pMovie, 20, stdin);//fgets will prevent C from fucking up so it will chunkate whatever the standard input (keyboard ) writes after 20 characters

	return 0;
}

/*

Right now we have a character array that holds 20 items 
but what if someone enters the longest movie name in the world 
exceeding 20 characters?

Everything will Fuck up so hard itll start writing over itself in memory because we didnt reserve enough memory space for it
fgets can help big time!!!

*/