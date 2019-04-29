#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main()
{
    int *paiFeld;   // Pointer Array
    int iAnz;       // Anzahl der Werte die Eingegeben werden
    int iX;         // Laufvariable

    printf("Anzahl der Werte: ");
    scanf("%d", &iAnz);
    //fflush(stdin);          // <-- nicht unbedingt Notwendig, da es eh nur unter Windows funktioniert aber Frau Hohmann steht drauf

    // Speicherplatz für die Anzahl einzugebener Werte reservieren
    paiFeld = (int *)malloc(iAnz * sizeof(int));

    // Werte einlesen
    for(iX = 0; iX < iAnz; iX++) {
        printf("Wert %d: ", iX+1);
        scanf("%d", paiFeld + iX);
    }

    // Array und Anzahl zum sortieren übergeben
    shakersort(paiFeld, iAnz);

    // Ausgabe der Werte
    for(iX = 0; iX < iAnz; iX++) {
        printf("%d ", *(paiFeld + iX));
    }

    // Speicherplatz freigeben
    free(paiFeld);

    return EXIT_SUCCESS;
}
