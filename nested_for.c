#include <cs50.h>
#include <stdio.h>

int main(void)
{
	//  Get size of grid, it can be any positive integer number bigger than zero
	int n;

	do
	{
		n = get_int("How many bricks do you want to print? ");
	}
	while(n < 1);

	// Print grid of bricks
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}