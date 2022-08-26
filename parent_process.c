#include <unistd.h>
#include <stdio.h>

/**
 * main - prints process ID
 * @current: current process ID
 * @parent: parent process ID
 * Return: 0
 */

int main()
{
	int current, parent;

	current = getpid();
	parent = getppid();

	printf("Process ID: %d\n", current);
	printf("Parent process ID: %d", parent);

	return (0);
}
