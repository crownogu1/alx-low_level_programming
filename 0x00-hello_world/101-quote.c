#include <stdio.h>
#include <unistd.h>

/**
 * main - this is the main function
 * description : this function writes to the standard error output stream
 * return : it returns an error 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
		return (1);
}
