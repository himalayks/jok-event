#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,larger,largest;
    printf("\n enter the two numbers :");
    scanf("%d%d",&num1,&num2);
    if(num1<0||num2<0)
        printf("\n invalid number in input");
    else
    {
            larger = (num1>num2)?num1:num2;
    printf("\n the larger of the two number is = %d", larger);
    printf("\n\n enter the third number :");
    scanf("%d",&num3);
    if(num3<0)
    {
        printf("\n invalid number in input");
        exit(0);
    }
    largest=(larger>num3)?larger:num3;
    printf("\n the largest of the three numbers is = %d", largest);
    }
    return 0;
}
