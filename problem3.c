#include <stdio.h>

int isPrime(long int input);

int main()
{
	long int i, product = 1;
	
	for(i=1;i<=600851475143;i++)
	{
		if(isPrime(i))
		{
			product *= i;
			printf("Found prime factor: %ld\n", i);
		}
	}
}

int isPrime(long int input)
{
	//make sure the number is divisible by nothing between 1 and input-1
	int i;
	for (i=2;i<=(input-1);i++)
	{
		if ((input % i) == 0)
			return 0;
	}
	
	return 1;
}


