#include <stdio.h>
int main(void)
{
	int n;
	int a[5];
	int *p;
	p = &n;
	printf("%p\n%p\n", &a, p);
	return 0;
}
