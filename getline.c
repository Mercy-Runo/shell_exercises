#include <stdio.h>
#include <stdlib.h>

/**
 * main - reads string input from user, then prints it using getline()
 * Return: 0
 */

//int input(char *s, int length);

int main()
{
  char *buffer;
  size_t bufsize = 45;
  size_t characters;

  buffer = (char *)malloc(bufsize * sizeof(char));

  if (buffer == NULL)
  {
    perror("unable to locate buffer");
    exit (1);
  }
  else
  {
    printf("$ \n");
    printf("Enter a command: \n");
    characters = getline(&buffer, &bufsize, stdin);
    printf("%zu characters read.\nYou typed: %s \n", characters, buffer);
    free(buffer);
  }
  return (0);
}
