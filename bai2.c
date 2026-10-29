#include<stdio.h>
int main ()
{
	int i=1,n;
	printf("nhap n:");
	scanf("%d",&n);
	printf("day so chan:");
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
		i++;
	}
	i=1;
	printf("\nday so le:");
	while(i<=n)
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
	}
		i++;
	}
	return 0;
		
}
