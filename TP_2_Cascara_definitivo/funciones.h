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


/** \brief inicia el estado del usuario
 *
 * \param lista el vector de los usuarios a inicializar
 */

void inicioEstado(EPersona registro[]);

/** \brief muestra el menu principal
 *
 * \return opción elegida por el usuario
 */

int menu(char mensaje[],char error[]);

/** \brief da el alta a usuario toma nombre , dni, edad
 *
 * \param verifca el dni unico
 * \param valida el ingreso de la edad hasta 100
 */

void ingreso(EPersona registro[]);

/** \brief da de baja un usuario
 *
 * \param vefica el dni del usuario que se quiere borrar
 * \param
 */

int borrar(EPersona registro[]);

/** \brief imprime la lista de usuarios ingresados
 *
 * \param acumula el registro del los usuarios
 * \param
 */

void imprimir(EPersona registro[]);

/** \brief grafico de usuarios dividios entre rangos de edades
 *
 * \param lista el vector
 * \param busca maximo y minimo
 */

void grafico(EPersona registro[],int var1 , int var2 ,int var3,int var4);

#endif // FUNCIONES_H_INCLUDED
