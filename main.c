#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,larger,largest;
    printf("\n enter the first number :");
    scanf("%d",&num1);
    printf("\n enter the second number :");
    scanf("%d",&num2);
    larger = (num1>num2)?num1:num2;
    printf("\n the larger of the two number is = %d", larger);
    printf("\n\n enter the third number :");
    scanf("%d",&num3);
    largest=(larger>num3)?larger:num3;
    printf("\n the largest of the three numbers is = %d", largest);
    return 0;
}
