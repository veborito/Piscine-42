#include <stdio.h>

int a;

int main()
{
	a = 12;
	{
		int a;
		a = 42;
	}
	
	printf("%d\n", a);
}
