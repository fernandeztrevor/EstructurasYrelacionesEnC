#include "usuario.h"
#include "serie.h"
#include "usuarioSerie.h"

void CrearListadoDeTresUsuarios(eUsuario MisUsuarios[])
{
    int i;
    for(i=0;i<3;i++)
    {
        MisUsuarios[i].idUsuario=i+100;
    }
     strcpy(MisUsuarios[0].nombre,"Maria Pia");
     strcpy(MisUsuarios[1].nombre,"Jose Luis");
     strcpy(MisUsuarios[2].nombre,"Dafne");

}
