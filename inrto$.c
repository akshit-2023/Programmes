#include<stdio.h>
int main()
{
    double a,b;
    printf("Enter rupees");
    scanf("%lf",&a);
    b=a/76.23;
    printf("%0.2lf rupees is equal to %0.2lf dollars\n",a,b);
    return 0;
}