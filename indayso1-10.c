#include<stdio.h>
int main()
{
	int i;
	//in gia tri tu 1 den 10//
	i=1;
	while(i<=10)
	{
		printf("%d\t",i);
		i=i+1;
	}
	//in gia tri tu 10 den 1//
	i=10;
	while(i>=1)
	{
		printf("%d\t",i);
		i=i-1;
	}
	return 0;
}
