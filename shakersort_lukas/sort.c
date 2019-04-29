#include "sort.h"
#include "swap.h"

void shakersort(int *paiFeld, int iAnz) {
    int iX;
    int iY;

    for(iX = 1; iX <= iAnz / 2; iX++) {
        for(iY = iX - 1; iY < iAnz - iX; iY++) {
            if(*(paiFeld + iY) > *(paiFeld + iY + 1)) {
                swap(paiFeld + iY, paiFeld + iY + 1);
            }
        }

        for(iY = iAnz - iX - 1; iY >= iX; iY--) {
            if(*(paiFeld + iY) < *(paiFeld + iY -1)) {
                swap(paiFeld + iY, paiFeld + iY - 1);
            }
        }
    }
}
