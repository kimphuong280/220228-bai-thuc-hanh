#include<stdio.h>
int main()
{
	int i,n,tich;
	n=1;
	while(n<=10)
	{
		i=1;
		while(i<=10)
		{
			printf("%d*%d=%d\n",n,i,tich);
			tich=n*i;
			i++;
		}
		printf("\n");
		n=n+1;
	}
	return 0;
}
