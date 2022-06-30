#include <stdio.h>
int main()
{
	int a[10][10];
	int b;

	b = 3;
	a[0][b] = 12;
	a[1][0] = 1234;
	a[3][6] = a[0][b];
	a[9][7] = 15;
	printf("%d\n", a[b][6]);
}
