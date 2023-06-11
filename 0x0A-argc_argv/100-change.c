#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the minimum number of coins for change
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 when success, 1 when error)
 */
int main(int argc, char *argv[])
{
	int money = atoi(argv[1]), i, changeCoins = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && money >= 0; i++)
	{
		while (money >= coins[i])
		{
			changeCoins++;
			money -= coins[i];
		}
	}
	printf("%d\n", changeCoins);
	return (0);
}
