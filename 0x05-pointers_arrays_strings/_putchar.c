#include "main.h"
#include <unistd.h>
/**
 *_putchar - writes the character c to stdout
 * @cThe character to print
 *
 * Return On success 1
 * On error -1 is returned , and error is set apprpriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
