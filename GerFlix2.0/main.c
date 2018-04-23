#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
#include "usuario.h"
#include "usuarioSerie.h"


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
    eUsuario MisUsuarios[3];
    eUsuarioSerie misRelaciones[15];


    CrearListadoSeries(listadoSerie, 5);



for (int i=0; i<3; i++)
    {
    printf("Usuario: %s", MisUsuarios[j].nombre);
    for (int j=0; j<15; j++)
    {//imprimir cada serie
        printf("Usuario: %s", MisUsuarios[j].nombre);

    }
        for(int k=0; k<4; j++)
        {
            printf("Serie: %s", array[k].serie);
        }
    }


    /*for (int i=0; i<5; i++)
    {
        printf("\n%d", listadoSerie[i].idSerie);
        printf("\n%s", listadoSerie[i].nombre);
        printf("\n%s\n", listadoSerie[i].genero);
    }*/



    return 0;
}
