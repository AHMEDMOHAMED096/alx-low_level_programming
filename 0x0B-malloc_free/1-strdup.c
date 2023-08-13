#include "main.h"
/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: the string to be returned
* Return: returns a pointer to a new string or Null if str = null
*/
char *_strdup(char *str)
{
	char *target = (char *)malloc(sizeof(str));
	target = _strdup(str);
	if (target == NULL)
	return (0);
	else
	return (target);
}
