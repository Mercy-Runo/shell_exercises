#include <stdio.h>
#include <string.h>

/**
 * main - splits a string and returns an array of each word of the string
 * @init_size: initial size of string
 * @*ptr: pointer to the character of next token. So the first time it is called, it will point to the first word.
 * @str: original string
 * @delim: string contaiining all the delimiters
 *         (what strtok will use to split the word, in this case it is the space character)
 * Return: 0
 */

int main()
{
	char str[] = "strtok needs to be called several times to split a string";
	int init_size = strlen(str);
	char delim[] = " ";

	char *ptr = strtok(str, delim); /*strtok replaces the delimiter with the NULL byte '\0' after every call*/

	while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim); /*In the next call to strtok, the first parameter need to be NULL 
                                so that strtok starts splitting the string from the next token's starting position it remembers*/
	}

	/* This loop will show that there are zeroes in the str after tokenizing */
	for (int i = 0; i < init_size; i++)
	{
		printf("%d ", str[i]); /* Convert the character to integer, in this case
							              the character's ASCII equivalent */
	}
	printf("\n");

	return 0;
}
