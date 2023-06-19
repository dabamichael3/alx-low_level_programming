#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point for the program 
 *integer, calculates the last digit, and prints it.
 * Return: 0 on success
 */
int main(void){int n;
int lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if (lastdigit  > 5)
{
printf("last degit %d is %d is greater than 5", n, lastdigit);
}
else if (lastdigit == 0)
{
printf("last degit %d is %d is 0", n, lastdigit);
}
else
{
printf("last degit %d is %d and less than 6 and not 0", n, lastdigit);
}
return (0);
}
