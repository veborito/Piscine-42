#include <stdio.h>

int main()
{
	char c;

	c = 'k';

	printf("%lu %d %c\n" , sizeof(c), c, c);

	int i;
	printf("%lu\n" , sizeof(i));
	
	float f;

	f = 12.37;
	printf("%lu %f\n" , sizeof(f), f);
	
	double d;
	printf("%lu\n" , sizeof(d));
}

