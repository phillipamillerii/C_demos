// Demo input name (characters) and print it
#include <stdio.h>

int main()
{
	// [#] limit the number of characters that can be entered
	// 		Error is go over looks to be 
	// 		*** stack smashing detected ***: terminated
	char name[20];
	printf("Enter name: ");

	// Asks for user input
	scanf("%s", name);
	printf("Your name is %s.\n", name);
	return 0;
}