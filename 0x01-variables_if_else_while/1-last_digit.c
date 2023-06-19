#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
<<<<<<< HEAD
 * main - A programthat prints the size of various data types
 *Description : 'positive'
 *return 0
 */
int main(void)
{int n;
int lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if (lastdigit  > 5)
{
printf("last degit %d is %d is greater than 5\n", n, lastdigit);
}
else if (lastdigit == 0)
{
printf("last degit %d is %d is 0\n", n, lastdigit);
}
else
{
printf("last degit %d is %d and less than 6 and not 0\n", n, lastdigit);
=======
 * main - function is the entry point of the program.
 *description:'It calculates and displays the last digit of a given number'
 *Return: 0
 */
int main(void)
{int n;
int ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld  > 5)
{
printf("last degit of %d is %d and  is greater than 5\n", n, ld);
}
else if (ld == 0)
{
printf("last degit of %d is %d and  is 0\n", n, ld);
}
else
{
printf("last degit of %d is %d and less than 6 and not 0\n", n, ld);
>>>>>>> 827ef70e4fb94aeea259b2baeb68823de50016e6
}
return (0);
}
