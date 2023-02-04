#include<stdio.h>
swap(int *n1, int *n2)
{
	int t;
	t=n1;
	n1=n2;
	n2=t;
	printf("A=%d and B=%d",*n1,*n2);
}
main()
{
	int a=6,b=8;
	swap(&a,&b);
}
