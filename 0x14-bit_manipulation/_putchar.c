#include "main.h"
#include <unistd.h>
/**
* _putchar - write char c to stdout
* @c:  char to be printed
*
* Return: 1 on success
* otherwise, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
