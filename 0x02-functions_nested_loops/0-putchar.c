/**
 * main - putchar
 *
 * Return: 0
 */
int main(void)
{
	char *myStr;

	myStr = "_putchar";
	while (*myStr != '\0')
	{
		_putchar(*myStr);
		myStr++;
	}
	_putchar('\n');
	return (0);
}
