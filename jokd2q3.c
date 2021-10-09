#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;
    float num1,num2,result;
    printf("\n Enter +,-,/,* to get the result : ");
    scanf("%c",&choice);
    printf("\nEnter the first number : ");
    scanf("%f",&num1);
    printf("Enter the second number : ");
    scanf("%f",&num2);
    switch(choice)
    {
        case '+':
            result=num1+num2;
            break;
        case '-':
            result=num1-num2;
            break;
        case '/':
            {
                if(num2==0)
                    {
                        printf("\n divide by zero error");
                        exit(0);
                    }
                else
                    {
                        result=num1/num2;
                    }
            break;
            }
        case '*':
            result=num1*num2;
            break;
        default:
            printf("Invalid operator entered ");
            exit(0);
            break;
    }
    printf("%.2f %c %.2f = %.2f ",num1, choice, num2, result);
    return 0;
}
