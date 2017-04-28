#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define C 20


void inicio(EPersona registro[])
{
    int i;
    for(i=0; i<C; i++)
    {
        registro[i].estado=0;
    }
}

int menu(char mensaje[],char error[])
{
    int opcion,aux;
    printf("%s",mensaje);
    aux=scanf("%d",&opcion);
    fflush(stdin);
    while(aux==0 ||(opcion<1||opcion>5))
    {
        printf("%s",error);
        fflush(stdin);
        aux=scanf("%d",&opcion);
    }
    return opcion;
}

void ingreso(EPersona registro[])
{
    int i,aux;
    for(i=0; i<C; i++)
    {
        if(registro[i].estado==0)
        {
            registro[i].estado=1;
            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(registro[i].nombre);
            printf("Ingrese edad :");
            fflush(stdin);
            aux=scanf("%d",&registro[i].edad);
            while(aux==0 || (registro[i].edad<1 || registro[i].edad>100))
            {
                printf("Ingrese edad valida: ");
                fflush(stdin);
                aux=scanf("%d",&registro[i].edad);
            }
            printf("Ingrese DNI :");
            fflush(stdin);
            aux=scanf("%d",&registro[i].dni);
            while(aux==0)
            {
                printf("Ingrese DNI nuevamente: ");
                fflush(stdin);
                aux=scanf("%d",&registro[i].dni);
            }

            break;
        }
    }
}

int borrar(EPersona registro[])
{
    int i,flag=0;
    int borrar;
    char pregBorrar;
    printf("Ingrese DNI de la persona a borrar: ");
    fflush(stdin);
    scanf("%d",&borrar);
    for(i=0; i<C; i++)
    {
        if(registro[i].dni==borrar)
        {
            printf("Esta seguro que desea borrar a %s (s/n)\n",registro[i].nombre);
            pregBorrar=getche();
            printf("\n");
            if(pregBorrar == 's')
            {
                registro[i].estado=0;

            }
            else
            {
                printf("Accion cancelada\n");
            }
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("No existe este usuario !\n");

    }
    return registro[i].estado;
}

void imprimir(EPersona registro[])
{
    EPersona Struct;
    int i,j;
    for(i=0; i<C-1; i++)
    {
        for(j=i+1; j<C; j++)
        {
            if(stricmp(registro[i].nombre,registro[j].nombre)>0)
            {
                Struct = registro[j];
                registro[j]= registro[i];
                registro[i]= Struct;
            }
        }
    }
    for(i=0; i<C; i++)
    {
        if(registro[i].estado==1)
        {
            printf("%s   -   %d  -   %d\n",registro[i].nombre,registro[i].edad,registro[i].dni);
        }
    }
}

void grafico(EPersona registro[],int hasta18 , int de19a35 ,int mayorde35 ,int mayor )
{
    int i,flag;
    for(i=0; i<C; i++)
    {
        flag=0;
        if(registro[i].estado==1)
        {
            if(registro[i].edad<=18)
            {
                hasta18++;
            }
            else
            {
                if(registro[i].edad>35)
                {
                    mayorde35++;
                }
                else
                {
                    de19a35++;
                }
            }
        }
    }
    if(hasta18 >= de19a35 && hasta18 >= mayorde35)
    {
        mayor = hasta18;
    }
    else
    {
        if(de19a35 >= hasta18 && de19a35 >= mayorde35)
        {
            mayor = de19a35;
        }
        else
        {
            mayor = mayorde35;
        }
    }
    for(i=mayor; i>0; i--)
    {
        if(i<10)
        {
            printf("%02d|",i);
        }

        if(i<= hasta18)
        {
            printf("*");
        }
        if(i<= de19a35)
        {
            flag=1;
            printf("\t*");
        }
        if(i<= mayorde35)
        {
            if(flag==0)
            {
                printf("\t\t*");
            }
            if(flag==1)
            {
                printf("\t*");
            }
        }
        printf("\n");
    }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
}
