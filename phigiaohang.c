#include <stdio.h>
#include <string.h>
int main()
{
	int a,b,c;
	float phi;
	printf("Gia mon 1:");
	scanf("%d",&a);
	printf("Gia mon 2:");
	scanf("%d",&b);
	printf("Gia mon 3:");
	scanf("%d",&c);
	if(a>0 && b>0 && c>0)
	{
		phi=(a+b+c)*15/100;
		printf("\nPhi giao hàng:%.2f",phi);
	
	}
	return 0;
}
