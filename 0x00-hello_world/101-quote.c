#include <stdio.h>
#include <unistd.h>

/**
 *main - will write a text to the stdout using an exact nbytes
 *Return: will return 1
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
return (1);
}
