#include <stdio.h>

// initialize main function
int main()
{
	// initialize integer variables
	int A, B, sum = 0;

	// Ask user for two numbers
	printf("Enter two numbers A and B : \n");

	// Read two numbers from user
	scanf("%d%d", &A, &B);

	// Add the two numbers
	sum = A + B;

	// Print the sum
	printf("Sum of A and B is: %d \n", sum);

	return 0;

}
