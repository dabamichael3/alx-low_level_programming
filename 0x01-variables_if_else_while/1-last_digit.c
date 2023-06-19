#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
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
}
return (0);
}
