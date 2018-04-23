#include <stdio.h>
#include <stdlib.h>
#include "serie.h"

/**
*
    1. los datos de la serie que ve cada usuario
    2. por cada serie todos los usuarios que la ven
    3. por cada serie cuantos usuarios la ven
*
*/
int main()
{
    eSerie listadoSerie[5];
    CrearListadoSeries(listadoSerie, 5);

    printf("Trevor Fernandez");

    for (int i=0; i<5; i++)
    {

        printf("\n%d", listadoSerie[i].idSerie);
        printf("\n%s", listadoSerie[i].nombre);
        printf("\n%s\n", listadoSerie[i].genero);

    }

    return 0;
}
