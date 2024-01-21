#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the sides of the triangle");
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b>c) && (b+c>a) && (c+a>b))
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Invlaid triangle");
    }
    return 0;
}