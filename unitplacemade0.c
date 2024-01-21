#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number");
    scanf("%d",&a);
    b=(a%100)%10;
    a=a-b;
    printf("Unit digit is made 0 new number is %d",a);
    return 0;
}