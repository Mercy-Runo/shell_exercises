#include <stdio.h>

/**
 * main - prints all arguments without using ac
 * @ac: number of itmes in av
 * @av: NULL terminated array of strings
 * Return: count
 */

int main(int ac, char **av)
{
  int i, count;

  for (i = 0; av[i] != NULL; i++)
    count = i;

  printf("%d", count);
      
  return (count);
}
