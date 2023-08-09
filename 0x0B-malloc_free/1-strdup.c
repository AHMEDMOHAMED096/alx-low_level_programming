#include "main.h"
/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: the string to be returned
* Return: returns a pointer to a new string or Null if str = null
*/
char *_strdup(char *str)
{
	char *target = (char *str)malloc(sizeof(char));

	if (target == NULL)
	return (0);
	target = _strdup(str);
	return (0);
	free(target);
}
