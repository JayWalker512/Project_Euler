//Program to solve Project Euler problem #55.
//By: Brandon Foltz
//gcc problem55.c -o problem55
#include <stdio.h>

long int reverseInt(long int input);
int isPalindrome(long int input);
int popDigit(long int *input);

int main()
{
	long int i, z, cur, numLychrels = 0;
	for (i = 1; i < 10000; i++)
	{
		cur = i;
		for (z = 0; z < 50; z++)
		{
			cur += reverseInt(cur);
			if (isPalindrome(cur))
				break;
			else
			{
				if (z == 49)
					numLychrels++;
			}
		}
	}
	printf("There are %ld Lychrel numbers below 10,000.\n", numLychrels);
}

long int reverseInt(long int input)
{
	long int reversed=0;
	while(input > 0)
	{
		reversed *= 10;
		reversed += input%10;
		input /= 10;
	}
	return reversed;
}

int isPalindrome(long int input)
{
	long int reversed = 0;
	reversed = reverseInt(input);
	
	if (input == reversed)
		return 1;
	else
		return 0;
	
	//herp derp, we don't need to do ANY of this!
	/*while (reversed && input)
	{
		if (popDigit(&input) != popDigit(&reversed))
		{
			return 0;
		}
	}
	return 1; //they never differed, so it's palindromatic.*/
}

//This function is only needed for the commented method above.
int popDigit(long int *input)
{
	int rv = 0;
	rv = *input % 10;
	*input /= 10;
	
	if (*input == 0)
		return -1;
	
	return rv;
}


