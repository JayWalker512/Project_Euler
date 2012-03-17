//solved
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *problemdata;
	int digits[1000];
	int currentdigit = 0;
	long int highest = 0;
	
	problemdata = fopen("problem8data", "r");
	if(!problemdata)
	{	
		puts("Couldnt find file \"problem8data\"");
		return 1;
	}
	
	do
	{
		digits[currentdigit] = (fgetc(problemdata) - 48); //ascii to int hack
		
		printf("digits[%d]: %d\n", currentdigit, digits[currentdigit]);
		currentdigit++;
	}
	while(currentdigit <= 999);
	
	fclose(problemdata);
	
	int i;
	long int current;
	for(i=0;i<=999;i++)
	{
		current = digits[i] * digits[i+1] * digits[i+2] * digits[i+3] * digits[i+4];
		if(current > highest)
		{
			highest = current;
			printf("Found new highest: %ld at %d\n", current, i);
		}
	}
	
	printf("Greatest product of 5 consecutive digits is: %ld\n", highest);
	
	return 0;
}

