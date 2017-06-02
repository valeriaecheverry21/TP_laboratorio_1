#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main()
{
    char seguir='s';

    eMovie theFilms[100];
    iniciarArray(theFilms,100);
    cargarBinario(theFilms,100);

    while(seguir=='s')
    {
        system("cls");

        switch(menuPrincipal())
        {
        case 1:
            system("cls");
            printf("\n\tAGREGAR PELICULA\t\n");
            optenerDatosPelicula(theFilms,10);
            guardarBinario(theFilms,10);
            system("pause");
            break;
        case 2:
            system("cls");
            printf("\n\tBORRAR PELICULA\t\n");
            eliminarPelicula(theFilms,10);
            guardarBinario(theFilms,10);
            system("pause");
            break;
        case 3:
            system("cls");
            printf("\n\tMODIFICAR PELICULA\t\n");
            modificarPelicula(theFilms,10);
            guardarBinario(theFilms,10);
            system("pause");
            break;
        case 4:
            system("cls");
            printf("\n\tGENERAR PAGINA WEB\t\n");
            generarHtml(theFilms,10);
            system("pause");
            break;
        case 5:
            seguir='n';
            break;
        default:
            printf("\n\tOpcion No Valida\n");
            system("pause");
            break;
        }
    }


    return 0;
}
