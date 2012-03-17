//solved
#include <stdio.h>

int isPrime(long int input);

int main()
{
	long int i = 2, numprimes = 0;
	
	for(;;)
	{
		if(isPrime(i))
		{
			numprimes++;
			printf("Found %ld primes, recent: %ld\n", numprimes, i);
			if (numprimes == 10001)
			{
				printf("Found final prime: %ld\n", i);
				return 0;
			}
		}
		i++;
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


