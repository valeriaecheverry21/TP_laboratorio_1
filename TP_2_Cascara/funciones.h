#include <stdio.h>
#include <stdlib.h>
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

void inicioEstado(EPersona registro[]);

int menu(char mensaje[],char error[]);

void ingreso(EPersona registro[]);

int borrar(EPersona registro[]);

void imprimir(EPersona registro[]);

void grafico(EPersona registro[],int var1 , int var2 ,int var3,int var4);

#endif // FUNCIONES_H_INCLUDED
