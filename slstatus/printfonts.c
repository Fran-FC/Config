#include <stdio.h>

void main()
{
	char *c = "";
	printf(" starting at: %s\n", &c);
	for(int i = 0; i < 100; i++)
	{
		printf("%c\n", c);
		c = c +1;
	}
}
