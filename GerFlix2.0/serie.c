#include "serie.h"
#include "usuario.h"
#include "usuarioSerie.h"

void CrearListadoSeries(eSerie array[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        array[i].idSerie=i+1;
        if(i%2==0)
        {
            strcpy(array[i].genero,"Terror");
        }else{
             strcpy(array[i].genero,"Humor");
        }

    }
     strcpy(array[0].nombre,"Los muertos vivos");
     strcpy(array[1].nombre,"Los vikingos");
     strcpy(array[2].nombre,"Los extraterrestres");
     strcpy(array[3].nombre,"Los hacker");
     strcpy(array[4].nombre,"Los perdidos");

}

