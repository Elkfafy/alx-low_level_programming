#include <stdio.h>
int main(void)
{
	int i = 0;
	char *f[];
	char *s = "ahmed";
	while (*s != '\n')
	{
		f[i] = *s;
		i++;
		printf("%c\n", *f[i]);
	}
}
