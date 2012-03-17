#include <stdio.h>
#include <math.h>

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

int main(int argc, char *argv[])
{
	if(isPrime(49892191))
	{
		printf("Number is prime!\n");
	}
	else
		puts("Nope, chuck testa.");
	return 0;
}


