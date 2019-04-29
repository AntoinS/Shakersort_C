#include <stdio.h>
#include <stdlib.h>
#include "swap.h"
#include "sort.h"

int main()
{
    int aiFeld[13] = {0};
    //{43, 432, 36, 5, 6, 57, 94, 63, 3, 44, 12, 18, 99999};
    int i, iAnz;

    printf("\n\t Eingabe\n");
    for(i=0;i<13;i++)
    {
        printf("\t%d >",i+1);
        scanf("%d",&aiFeld[i]);
        fflush(stdin);
    }

    shakersort(aiFeld, iAnz);

    printf("\n\tSortiert\n\t>");
    for (i=0;i<13;i++)
    {
        printf("%d ",aiFeld[i]);
    }

    return 0;
}
