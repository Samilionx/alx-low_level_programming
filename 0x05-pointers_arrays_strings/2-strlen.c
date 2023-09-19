#include "main.h"
/**
 * _strlen - function name
 * @s: function parameter
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
