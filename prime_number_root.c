// C program to check if a number is prime using sqrt(n)
// When build need to link math library
//	gcc -o compiled_tests/prime_number_root prime_number_root.c -lm
#include <math.h>
#include <stdio.h>
int main()
{
	int N = 17;
	int flag = 1;

	double sqroot = sqrt(N);

    	// Iterate from 2 to sqrt(n)
	for (int i = 2; i <= sqroot; i++) {

		// If n is divisible by any number between 2 and 
        	// sqrt(n), it is not prime 
		if (N % i == 0) {
			flag = 0;
			break;
		}
	}

	if (flag) {
		printf("%d is a prime number\n", N); 

	}
	else {
		printf("%d is not a prime number\n", N);

	}
	return 0;
}
