#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 *  in memory which contains a copy of the string
 *  given as a parameter
 * @str: the string to copy
 * Return: a pointer to the duplicated string
 * or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *new_str;
	int len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, str);

	return (new_str);
}
