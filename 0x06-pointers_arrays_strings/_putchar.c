#include "main.h"
#include <unistd.h>
/**                                                                                                                                     
 *_putchar - writes                                                                                          
 *@c: The charact                                                                                                           
 *                                                                                                                                      
 *Return: On success 1.                                                                                                                
 *On error, -1 is ret                                                                            
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
