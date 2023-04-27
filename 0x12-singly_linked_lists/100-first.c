#include <stdio.h>
/**
 * first - print first
 */
void first(void) __attribute__((constructor));
void first(void)
{
	printf("%s%s", "You're beat! and yet, you must ",
		       "allow,\nI bore my house upon my back!\n");
}
