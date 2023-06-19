#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function is the entry point of the program.
 *description:'It calculates and displays the last digit of a given number'
 *Return: 0
 */
int main(void)
{int n;
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
printf("last degit of %d is %d and  is 0", n, lastdigit);
}
else
{
printf("last degit %d is %d and less than 6 and not 0", n, lastdigit);
}
return (0);
}
