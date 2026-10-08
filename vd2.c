#include <stdio.h>
#include <string.h>

int main()
{
	int a;
	float f;
	char ch;
	char hoten[30];
	scanf("%d",&a);
	scanf("%f",&f);
	fflush(stdin);
	scanf(" %c ",&ch);
	strcpy(hoten,"Tran Thi Kim Phuong");
	printf("\n%d\t%.1f%t$c\t%s",a,f,ch,hoten);
	return 0;
}
