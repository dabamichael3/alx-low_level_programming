#include "main.h"
/**
 * _strlen - Calculate the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
int long = 0;
while (*str != '\0')
{
long++;
str++;
}
return (long);

}
