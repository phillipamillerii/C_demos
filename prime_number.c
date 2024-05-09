#include <stdio.h>

// Function to confirm prime numbers
void checkPrime(int N)
{
	// Temp Flag for true
	int flag = 1;

	// loop to interate through 2 to N/2
	for (int i = 2; i <= N / 2; i++) {
		
		if (N %i == 0 ) {
			flag = 0;
			break;
		}
	}
	if (flag) {
		printf ("The number %d is a Prime Number\n", N);
	}
	else {
		printf ("The number %d if not a Prime Number\n", N);
	}

	return;
}

//main code
int main()
{
	int N = 3;
	checkPrime(N);

	return 0;
}
