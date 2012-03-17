//solved
#include <stdio.h>

int main()
{
	int i, total = 0;
	for (i=1;i<1000;i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			total += i;
			printf("Found multiple %d, total is %d\n", i, total);
		}
	}
	
	printf("The sum of all multiples of 3 or 5 below 1000 is: %d\n", total);
	
	return 0;
}

