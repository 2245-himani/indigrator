#include<stdio.h>
main()
{
	int a[5]={7,3,8,4,5,9};
	int *p=&a[0];
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d",*(p+i));
	}
}
