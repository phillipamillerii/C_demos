#include <stdio.h>

//Function to multiple floating numbers
float multiply(float a, float b)
{
	return a * b;
}

// main function
int main()
{
	float A = 2.12, B = 3.88, product;
	// pass float num to function
	product = multiply(A, B);

	//display product
	printf("Product of entered numbers is :%.3f \n", product);

	return 0;

}
