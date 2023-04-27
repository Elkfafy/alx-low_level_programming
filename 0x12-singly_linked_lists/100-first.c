#include <stdio.h>
/**
 * first - print first
 */
void first() __attribute__((constructor));
void first()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
