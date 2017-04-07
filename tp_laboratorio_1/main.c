#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    char seguir = 's';
    int opcion;
    float n1=0;
    float n2=0;
    int flagn1, flagn2;
    float resultado;



    while(seguir == 's')
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=%.2f)\n", n1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", n2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                 printf("ingrese primer numero :\n", n1);
                 scanf("%f",&n1);
                 flagn1 = 1;
                 break;

            case 2:
                 printf("ingrese segundo numero :\n", n2);
                 scanf("%f",&n2);
                 flagn2=1;
                 break;

            case 3:
                if(flagn1==0 || flagn2==0)
                {
                    printf("Error debe ingresar un numero!");
                    break;
                }

                    resultado=sumar(n1, n2);
                    printf("la Suma da: %.2f\n", resultado);
                    system("pause");
                    break;
            case 4:
                if(flagn1==0 || flagn2==0)
                {
                    printf("Error debe ingresar un numero!");
                    break;
                }
                resultado=restar(n1, n2);
                printf("la resta da: %.2f\n", resultado);
                system("pause");
                break;
            case 5:
                if(flagn1==0 || flagn2==0)
                {
                    printf("Error debe ingresar un numero!");
                    break;
                }
                if(flagn2==0)
                {
                    printf("Error, no se puede dividir por 0");
                    break;
                }
                resultado=division(n1, n2);
                printf("la division da: %.2f\n", resultado);
                system("pause");
                break;
            case 6:
                if(flagn1==0 || flagn2==0)
                {
                    printf("Error debe ingresar un numero!");
                    break;
                }
                resultado=multiplicacion(n1, n2);
                printf("la multiplicacion da: %.2f\n", resultado);
                system("pause");
                break;
            case 7:
                if(flagn1==0 || flagn2==0)
                {
                    printf("Error debe ingresar un numero!");
                    break;
                }
                if(n1 == 0 || n1 != (int) n1)
                {
                    printf("Error");
                    break;
                }
                resultado=factorial(n1);
                printf("el factorial da: %.2f\n", resultado);
                system("pause");
                break;
            case 8:
                 if(flagn1==0 || flagn2==0)
                {
                    printf("Error debe ingresar un numero!");
                    break;
                }
                resultado=sumar(n1, n2);
                printf("la Suma da: %.2f\n", resultado);

                resultado=restar(n1, n2);
                printf("la resta da: %.2f\n", resultado);
                 if(flagn2==0)
                {
                    printf("Error, no se puede dividir por 0");

                }
                if(flagn2!= 0)
                {
                resultado=division(n1, n2);
                printf("la division da: %.2f\n", resultado);

                }


                resultado=multiplicacion(n1, n2);
                printf("la multiplicacion da: %.2f\n", resultado);

                if(n1 == 0 || n1 != (int) n1)
                {
                    printf("Error");

                }
                if(n1!=0 || n1== (int) n1)
                {
                 resultado=factorial(n1);
                 printf("el factorial da: %f\n", resultado);
                 system("pause");
                }
                break;
            case 9:
                seguir = 'n';
                break;
        }


}

    return 0;
}
