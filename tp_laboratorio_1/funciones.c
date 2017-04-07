#include "funciones.h"
#include <stdlib.h>
#include <stdio.h>
/** \brief suma, toma numeros ingresados N1 y N2 y los suma
 *
 * \param float N1 para el primer numero a operar
 * \param float N2 para el segundo numero a operar
 * \return retorna el resultado de la suma
 *
 */

float sumar(float n1, float n2)
{
float resultado;
resultado=n1+n2;
return resultado;
}
/** \brief resta, toma numeros ingresados N1 y N2 y los resta
 *
 * \param float N1 para el primer numero a operar
 * \param float N2 para el segundo numero a operar
 * \return retorna el resultado de la resta
 *
 */

float restar(float n1, float n2)
{
float resultado;
resultado=n1-n2;
return resultado;
}
/** \brief division, toma numeros ingresados N1 y N2 y los divide
 *
 * \param float N1 para el primer numero a operar
 * \param float N2 para el primer numero a operar
 * \return retorna el resultado de la division
 *
 */

float division(float n1, float n2)
{
float resultado;
resultado=n1/n2;
return resultado;
}
/** \brief multiplicacion, toma numeros ingresados N1 y N2 y los multiplica
 *
 * \param float N1 para el primer numero a operar
 * \param float N2 para el primer numero a operar
 * \return retorna el resultado de la multiplicacion
 *
 */

float multiplicacion(float n1, float n2)
{
float resultado;
resultado=n1*n2;
return resultado;
}
/** \brief toma el valor del numero a operar N1
 *
 * \param float N1 para el numero a operar
 * \return muestra los resultados de la misma funcion,no retorna nada
 *
 */

float factorial(int n1)
{
    int factorial = 1, contador;

    for(contador = 1; contador <= n1; contador++)
    {
        factorial = factorial * contador;
    }
return factorial;
}
