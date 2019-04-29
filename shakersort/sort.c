#include "sort.h"
#include "swap.h"

void shakersort(int *paiFeld[], int iAnz)

{
    int iB, iZ;

    for (iB=1;iB<=iAnz/2;iB++)
    {
        for(iZ=iB-1;iZ<iAnz-iB;iZ++)
        {
            if(paiFeld[iZ]>paiFeld[iZ+1])
            swap(&paiFeld[iZ], &paiFeld[iZ+1]);
        }
        for (iZ=iAnz-iB-1;iZ>=iB;iZ--)
        {
            if (paiFeld[iZ]<paiFeld[iZ-1])
            swap(&paiFeld[iZ],&paiFeld[iZ-1]);
        }
    }
}

/*void shakersort(int *paiFeld[] , int iAnz)
{
	int li=0, re=iAnz-1, mov;
    int j, hilf;
	do
	{
		for(j=re; j>=li+1; j--)
		{
			if(paiFeld[j-1] > paiFeld[j])
			{
				hilf = paiFeld[j-1];
				paiFeld[j-1] = paiFeld[j];
				paiFeld[j] = hilf;
				mov = j;
			}
		}

		li = mov;

		for(j=li; j<=re-1; j++)
		{
			if(paiFeld[j] > paiFeld[j+1])
			{
				hilf = paiFeld[j+1];
				paiFeld[j+1] = paiFeld[j];
				paiFeld[j] = hilf;
				mov = j;
			}
		}

		re = mov;
	} while(li<re);
}
*/

/*void shakersort(int *paiFeld[] , int iAnz)
{
    for (int i = 0; i < iAnz/2; i++) {
        //bool swapped = false;
        for (int j = i; j < iAnz - i - 1; j++) { //one way
            if (paiFeld[j] < paiFeld[j+1]) {
                int tmp = paiFeld[j];
                paiFeld[j] = paiFeld[j+1];
                paiFeld[j+1] = tmp;
                //swapped = true;
            }
        }
        for (int j = iAnz - 2 - i; j > i; j--) { //and back
            if (paiFeld[j] > paiFeld[j-1]) {
                int tmp = paiFeld[j];
                paiFeld[j] = paiFeld[j-1];
                paiFeld[j-1] = tmp;
                //swapped = true;
            }
        }
      //  if(!swapped) break; //block (break if no element was swapped - the paiFeld is sorted)
    }
}
*/
