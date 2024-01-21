#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number and the digit");
    scanf("%d%d",&a,&b);
    a=(a*10)+b;
    printf("Appended successfully new number is %d\n",a);
    return 0;
    
}