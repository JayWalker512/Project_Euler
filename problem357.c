//gcc problem357.c -o problem357 -lm
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(unsigned long int input);
unsigned long int *calculateDivisors(unsigned long int input);
int solveFor(unsigned long int input);

int main(int argc, char *argv[])
{	
	unsigned long int sumOfAll = 0;
	unsigned long int curNum;
	
	for (curNum = 1;curNum <= 100000000; curNum++)
	{
		if (solveFor(curNum))
		{
			printf("Success for value: %ld\n", curNum);
			sumOfAll += curNum;
		}
	}
	
	printf("Sum of all values: %ld\n", sumOfAll);
	
	return 0;
}

int isPrime(unsigned long int input)
{
	//improve efficiency by not testing against even values except for 2:
	//http://en.wikipedia.org/wiki/Primality_test

	unsigned long int i, limit;
	limit = sqrt(input);
	
	if ((input % 2) == 0)
	{
		return 0;
	}
	
	//skip all even values except 2 (look above)
	for (i=3;i<=limit;i+=2)
	{
		if ((input % i) == 0)
			return 0;
	}
	
	return 1;
}

unsigned long int *calculateDivisors(unsigned long int input)
{
	unsigned long int i;
	//unsigned long int *divisors;
	//divisors = (unsigned long int *)malloc(input * sizeof(unsigned long int));
	static unsigned long int divisors[50000000];
	
	unsigned long int limit;
	//limit = (input / 2);
	limit = sqrt(input);
	
	//initialize array
	for(i=0;i<=limit;i++)
	{
		*(divisors+i) = 0;
	}
	
	//calculate divisors
	int divisorsIndex = 0;
	for (i=1;i<=limit;i++)
	{
		if ((input % i) == 0)
		{
			*(divisors+divisorsIndex) = i;
			divisorsIndex++;
		}
	}
	
	return divisors;
}

int solveFor(unsigned long int input)
{
	unsigned long int i;
	unsigned long int *divisors;
	divisors = calculateDivisors(input);
	for (i=0;*(divisors+i) != 0;i++)
	{
		unsigned long int testVal;
		testVal = (input / *(divisors+i)) + *(divisors+i);
		if (!(isPrime(testVal)))
			return 0;
	}
	
	return 1;
}

