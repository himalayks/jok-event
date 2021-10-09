#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0,rem;
    printf("\n enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum= sum+rem+1;
        num=num/10;
    }
    printf("\n the sum of the digits are %d",sum);
    return 0;
}
