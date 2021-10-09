#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("\n enter the candidate age : ");
    scanf("%d",&age);
    (age>=18)?printf("\n person is eligible to vote"):printf("\n person is not eligible to vote");

    return 0;
}
