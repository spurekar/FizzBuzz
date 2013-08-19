#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	//Check each number from 1 to 100 inclusive
	for (int i = 1; i <= 100; i++)
	{
		//The number is divisible by 3 and 5
		if (i % 15 == 0)
		{
			//Print FizzBuzz
			printf("FizzBuzz\n");
		}
		//The number is divisible by only 3
		else if (i % 3 == 0)
		{
			//Print Fizz
			printf("Fizz\n");
		}
		//The number is divisible by only 5
		else if (i % 5 == 0)
		{
			//Print Buzz
			printf("Buzz\n");
		}
		//The number is divisible by neither 3 nor 5
		else
		{
			//Print the number
			printf("%i\n", i);
		}
	}
	return 0;
}
