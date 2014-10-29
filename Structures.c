//Tutorial 49 Structures
#include <stdio.h>
#include "structure.h"

int main()
{
	struct user user1; //Creating instances of user structures
	struct user user2;

	user1.age = 20;
	user2.age = 19;

	puts("What is the first name of user1?\n");
	gets(user1.firstName);
	puts("What is the name of user2?\n");
	gets(user2.firstName);

	printf("User1's name is %s and they are %d years old.\n", user1.firstName, user1.age);
	printf("User2's name is %s and they are %d years old\n", user1.firstName, user2.age);
	

	return 0;
}