//solved
#include <stdio.h>

int main()
{
	long int i, sumofsquares = 0, squareofsum = 0;
	
	for(i=1;i<=100;i++)
	{
		sumofsquares += (i * i);
	}
	printf("The sum of the squares of the first 100 natural numers is %ld\n", sumofsquares);
	
	for(i=1;i<=100;i++)
	{
		squareofsum += i;
	}
	squareofsum *= squareofsum;
	printf("The square of the sum of the first 100 natural numers is %ld\n", squareofsum);
	
	printf("The difference between them is %ld\n", (squareofsum - sumofsquares));
	
	return 0;
}

