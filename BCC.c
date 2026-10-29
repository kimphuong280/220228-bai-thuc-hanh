#include<stdio.h>
int main ()
{
	int i,n,tich;
	printf("Nhap so tu 1 den 10:");
	scanf("%d",&n);
	if(n>=1 && n<=10)
	{
		printf("BCC %d:\n",n);
		i=1;
		while(i<=10)
		{
			tich=n*i;
			printf("%d*%d=%d\n",n,i,tich);
			i++;
		}
	}
	else
	{
		printf("Nhap lai:\n");
	}
	return 0;
}
