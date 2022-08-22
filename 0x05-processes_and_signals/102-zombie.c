#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * infinite_while - Runs infinitely.
 * Return: Always 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - Entry point.
 * Return: Always 0
 */
int main(void)
{
	int i;
	pid_t child_id;

	for (i = 0; i < 5; i++)
	{
		child_id = fork();
		if (child_id == 0)
			return (0);
		else
		{
			printf("Zombie process created, PID: %d\n", child_id);
		}
	}

	i = infinite_while();
	return (0);
}
