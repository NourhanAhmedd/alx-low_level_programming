#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: Argument Count.
 * @argv: Argument Vector.
 *
 * Return: 0 (Success).
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int index;
		int numbers;
		int Cent[] = {25, 10, 5, 2, 1};
		int amount_of_money;

		numbers = 0;
		amount_of_money = atoi(argv[1]);
		for (index = 0; index < 5; index++)
		{
			if (amount_of_money >= Cent[index])
			{
				numbers = numbers + amount_of_money / Cent[index];
				amount_of_money = amount_of_money % Cent[index];

				if (amount_of_money % Cent[index] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", numbers);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
