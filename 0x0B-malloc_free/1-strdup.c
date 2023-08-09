#include <main.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
*
* Return: returns a pointer to a new string or Null if str = null
*/
char *_strdup(char *str)
{
	char *target;

	char *target = (char *)malloc(sizeof(char))
	
	if (*target == NULL)
	return(0);
	target = _strdup(str);
	free(target);
}