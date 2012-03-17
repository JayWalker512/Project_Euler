//solved
#include <stdio.h>
#include <math.h>

int isPrime(unsigned long int input);

int main()
{
	unsigned long int i = 3, total = 2, lastprime;
	
	for(;;)
	{
		if(isPrime(i))
		{
			if (i < 2000000)
			{
				total += i;
				lastprime = i;
			}
			else
			{
				printf("Last prime: %ld, total: %ld\n", lastprime, total);
				return 0;
			}
		}
		i+=2;
	}
}

int isPrime(unsigned long int input)
{
	unsigned long int i, limit;
	limit = sqrt(input);
	for (i=2;i<=limit;i++)
	{
		if ((input % i) == 0)
			return 0;
	}
	
	return 1;
}


