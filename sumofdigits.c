#include<stdio.h>
int main()
{
    int a,b,c,d,sum;
    printf("Enter three digit number");
    scanf("%d",&a);
    b=a/100;
    c=(a%100)/10;
    d=a%10;
    sum=b+c+d;
    printf("sum if %d",sum);
    return 0;
}