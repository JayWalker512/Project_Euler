//solved
#include <stdio.h>

int main()
{
	int terms[2] = {1,2}; 
	int sum = 2;
	
	while(terms[1] < 4000000)
	{
		int newterm;
		newterm = terms[0] + terms[1]; //generate next term
		terms[0] = terms[1]; terms[1] = newterm; //fill array with new terms
		if((newterm % 2) == 0)
			sum += newterm;
	}
	
	printf("The sum of all even terms in the Fibonacci sequence not exceeding 4 million is: %d\n", sum);
	
	return 0;
}

