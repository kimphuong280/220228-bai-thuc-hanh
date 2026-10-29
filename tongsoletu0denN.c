#in#include<stdio.h>
int main ()
{
	int i=1,n,s=0;
	printf("nhap n:");
	scanf("%d",&n);
	while(i<=n)
	{
		s=s+i;
		i=i+2;
	}
	printf("Tong cac so le tu o den %d la:%d",n,s);//n cung cap gia tri cho %d thu nhat
													//s cung cap gia tri cho %d thu hai
	return 0;
}
