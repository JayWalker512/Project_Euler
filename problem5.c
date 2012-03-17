#include <stdio.h>

int main()
{
	unsigned int number;
	unsigned int i;
	for(number=20;number<999999999;number++)
	{
		for(i=1;i<=20;i++)
		{
				if(number % i == 0)
				{
					//continue 
					if(i == 20)
					{
						printf("Winner: %d\n", number);
						return 0;
					}
				}
				else
					break;
		}
	}	
}
