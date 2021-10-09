#include <stdio.h>
#include <stdlib.h>

int main()
{
     long int rank;
    printf("\n enter the rank of the student:");
    scanf("%d",&rank);
    if(rank<=3250)
        printf("\n he will get in all the branches");
    else if(rank>3250&&rank<=6505)
        printf("\n he will get admission in ISE , EandC and MEC");
    else if(rank>6505&&rank<=12012)
        printf("\n he will get admission in EandC and MEC");
    else if(rank>12012&&rank<=22340)
        printf("\n he will get admission in MEC");
    else
        printf("\n admission not possible at RNSIT");
    return 0;
}
