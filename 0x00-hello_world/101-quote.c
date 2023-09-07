#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the exact word in a line
 * Return: Always 0 if it's successful
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
