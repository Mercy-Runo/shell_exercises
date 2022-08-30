#include <stdio.h>

/**
 * main - prints all arguments without using ac
 * @ac: number of itmes in av
 * @av: NULL terminated array of strings
 * Return: count
 */

int main(int ac, char **av)
{
  int i;
  char count;

  for (i = 0; av[i] != NULL; i++)
    count = av[i];

  printf("%s", count);
      
  return (count);
}
