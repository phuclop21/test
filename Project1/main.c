#include <stdio.h>

int main(void)
{
	float upper, integration = 0.0, stepSize;
	unsigned int subInterval = 10000;

	// Input 
	printf("Enter upper limit of integration: ");
	scanf("%f", &upper);

	// Calculation 
	// Finding step size 
	stepSize = (upper - 0.0) / subInterval;

	for (int i = 0; i <= subInterval - 1; i++) {
		integration += stepSize * stepSize * (i * i + (i + 1) * (i + 1));
	} // end for

	printf("\nRequired value of integration is: %.3f", integration * stepSize / 2);
}