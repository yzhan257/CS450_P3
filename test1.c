#include <stdlib.h>
#include <stdio.h>

int main()
{
	int *p;
	p=malloc(sizeof(int));
	*p=100;
	printf("%d\n",*(p));
	return 0;
}
