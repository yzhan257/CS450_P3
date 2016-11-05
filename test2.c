#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	p=(int*)malloc(sizeof(int)*100);
	int i;
	for (i=0;i<100;i++) *(p+i)=i;
	printf("Size of the array is %d\n",p[97]);
	free(p);
	return 0;
}
