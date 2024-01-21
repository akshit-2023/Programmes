#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if (a/100!=0 && a/1000==0)
    {
        printf("Three digit number");
    }
    else
    {
        printf("Not three digit number");
    }
    return 0;
}