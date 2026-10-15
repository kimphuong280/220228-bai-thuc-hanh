#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Nhap a:");
    scanf("%d",&a);
    printf("Nhap b:");
    scanf("%d",&b);
    printf("Nhap c:");
    scanf("%d",&c);
    if(c>a && c>b)
    {
        printf("c là so lon nhat");
    }
    else if(b>a && b>c)
    {
         printf("b là so lon nhat");
    }
    else if (a>b && a>c)
    {
         printf("a là so lon nhat");
    }
    else
{
    printf("Ca ba so bang nhau");
}
return 0;
}
