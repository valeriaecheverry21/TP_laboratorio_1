#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define C 20

int main()
{
    char seguir='s';
    int opcion=0;
    int i,j;
    int hasta18, de19a35, mayor35, mayor;
    int flag=0;



    EPersona registro[C],auxStruct;

    inicio(registro);

    while(seguir=='s')
    {
        system("cls");
        opcion = menu("1- Agregar persona\n2- Borrar persona\n3- Imprimir lista ordenada por  nombre\n4- Imprimir grafico de edades\n\n5- Salir\n","Error ingrese nuevamente una opcion entre 1 y 5: ");

        switch(opcion)
        {
            case 1:
                ingreso(registro);
                system("pause");
                break;
            case 2:
               borrar(registro);
               system("pause");
                break;
           case 3:
                imprimir(registro);
                system("pause");
                break;
            case 4:
                hasta18=0;
                de19a35=0;
                mayor35=0;
                grafico(registro, hasta18, de19a35, mayor35, mayor);
                system("pause");
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }
    return 0;
}
