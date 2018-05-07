#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

    CrearListadoUsuariosYSeries(misRelaciones);
    CrearListadoDeTresUsuarios(MisUsuarios);
    CrearListadoSeries(listadoSerie, 5);

    int opcion=0;
    int i;
    int j;
    int k;
    char busqueda[10];
    int flag;

    for(i=0; i<5;i++)
    {
        listadoSerie[i].rating=0;
    }



do
{
    printf("\n1. Mostrar por cada usuario, las series que ve.\n2. Mostrar por cada serie, los usuarios que la ven.\n3. Mostrar las series menos populares.\n4. Ingresar usuario y listar sus series.\n5. Ingresar serie y listar sus usuarios.\n6. Top 3 de series\n\n9.Salir\n");
    scanf("%d", &opcion);

    switch(opcion)
    {
    case 1:
        {
           for(i=0;i<3;i++)
            {
                printf("Usuario: %s\nSeries que ve:\n",MisUsuarios[i].nombre);
                for(j=0;j<9;j++)
                {
                if(MisUsuarios[i].idUsuario==misRelaciones[j].idUsuario)
                {
                        for(k=0;k<4;k++)
                            {
                            if(misRelaciones[j].idSerie==listadoSerie[k].idSerie)
                            printf("-%s.\n",listadoSerie[k].nombre);
                            }
                }
                }
            }
        }
        break;
    case 2:
        {
           for(i=0;i<4;i++)
            {
                printf("Serie: %s\nUsuarios que la ven:\n",listadoSerie[i].nombre);
                for(j=0;j<9;j++)
                {
                if(listadoSerie[i].idSerie == misRelaciones[j].idSerie)
                {
                        for(k=0;k<3;k++)
                            {
                            if(misRelaciones[j].idUsuario == MisUsuarios[k].idUsuario)
                            printf("- %s.\n",MisUsuarios[k].nombre);
                            }
                }
                }

            }
        }
        break;
    case 3:
        {
            printf("Series menos vistas:\n");
            for(i=0; i<5; i++)
            {
                for(j=0; j<10; j++)
                {
                 if(listadoSerie[i].idSerie==misRelaciones[j].idSerie)
                    {
                        listadoSerie[i].rating++;
                    }
                }
            }
            /*for(k=0; k<5; k++)
                {
                    printf("%s. Rating: %d\n", listadoSerie[k].nombre, listadoSerie[k].rating);
                }*/

                for(i=0; i<10; i++)
                {
                    for(j=0; j<5; j++)
                    {
                        if(listadoSerie[j].rating == i)
                        {
                            printf("%s -- Rating: %d \n", listadoSerie[j].nombre, i);
                        }
                    }
                }


        }break;
    case 4:
        {
            printf("Ingrese el usuario que desea buscar:\n");
            fflush(stdin);
            gets(busqueda);
            for(i=0; i<3;i++)
            {
                k=strcmp(busqueda,MisUsuarios[i].nombre);
                if(k == 0)
                        {
                         printf("Las series que ve %s son:\n", MisUsuarios[i].nombre);
                        for(j=0;j<9;j++)
                            {
                            if(MisUsuarios[i].idUsuario==misRelaciones[j].idUsuario)
                                {
                                for(k=0;k<4;k++)
                                    {
                                    if(misRelaciones[j].idSerie==listadoSerie[k].idSerie)
                                    printf("-%s.\n",listadoSerie[k].nombre);
                                    }
                                    flag=1;
                                }
                            }
                        }
            }
            if(flag!=1)
                    {
                    printf("Usuario inexistente, recuerde utilizar mayusculas en las iniciales.\n");
                    }

            }break;
    case 5:
        {
            printf("Ingrese la serie que desea buscar:\n");
            fflush(stdin);
            gets(busqueda);
            for(i=0; i<5;i++)
            {
                k=strcmp(busqueda,listadoSerie[i].nombre);
                if(k == 0)
                        {
                         printf("La series *%s* es vista por:\n", listadoSerie[i].nombre);
                        for(j=0;j<9;j++)
                            {
                            if(listadoSerie[i].idSerie==misRelaciones[j].idSerie)
                                {
                                for(k=0;k<3;k++)
                                    {
                                    if(misRelaciones[j].idUsuario==MisUsuarios[k].idUsuario)
                                    printf("-%s.\n",MisUsuarios[k].nombre);
                                    }
                                    flag=1;
                                }
                            }
                        }
            }
            if(flag!=1)
                    {
                    printf("Serie inexistente, recuerde utilizar solo la primer letra en mayuscula.\n");
                    }
        }break;
    case 6:
        {
            flag=3;
            for(i=0; i<5; i++)
            {
                for(j=0; j<10; j++)
                {
                 if(listadoSerie[i].idSerie==misRelaciones[j].idSerie)
                    {
                        listadoSerie[i].rating++;
                    }
                }
            }

            for(i=5; i>0; i--)
                {
                    for(j=0; j<5; j++)
                    {
                        if(flag>0)
                        {
                            if(listadoSerie[j].rating == i)
                        {
                            printf("%s -- Rating: %d \n", listadoSerie[j].nombre, i);
                            flag--;
                        }
                        }

                    }
                }

        }break;
    }
}
while(opcion!=9);


    return 0;
}
