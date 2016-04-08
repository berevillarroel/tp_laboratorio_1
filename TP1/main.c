#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float num1=0,num2=0,divii=0,sumaa=0,restaa=0,multii=0, factor=0;

    while(seguir=='s')
       {
        printf("1- Ingresar 1er operando (A= %.2f)\n", num1);
        printf("2- Ingresar 2do operando (B= %.2f)\n", num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                scanf("%f",&num1);//Se ingresa primer valor de la operacion = A
                printf("El primer valor (A) ingresado es: %f\n\n", num1);
                break;
            case 2:
                scanf("%f",&num2); // Se ingresa segundo valor de la operacion = B
                printf("El segundo valor (B) ingresado es: %f\n\n", num2);
                break;
            case 3:
                sumaa=(suma(num1,num2));
                printf("El resultado de la suma es: %f\n\n",sumaa);
                break;// se suman valores A y B
            case 4:
                restaa=(resta(num1,num2));
                printf("El resultado de la resta es: %f\n\n",restaa);
                break; // se restan valores A y B
            case 5:
                while (num2==0)
                  {
                printf("Error. B no puede ser 0. Ingrese otro valor: ");
                scanf("%f", &num2); // como el valor B no puede ser cero se informa error y se pide otro valor
                }
                divii=(divi(num1,num2));
                printf("El resultado de la division es: %.2f\n\n",divii);
                break;// division de A y B cuando B no es cero.

            case 6:
                multii=(multi(num1,num2));
                printf("El resultado de la multiplicacion es: %f\n\n",multii);
                break; //multiplicacion entre A y B.

            case 7:
                factor=factorial(num1);
                printf("El resultado del factorial es: %.2f\n\n",factor);
                break; // Factorial del valor A.

            case 8: // En este case se muestran todas las operaciones de una vez.
                sumaa=(suma(num1,num2));
                printf("El resultado de la suma es: %.2f\n",sumaa);

                restaa=(resta(num1,num2));
                printf("El resultado de la resta es: %.2f\n",restaa);

                multii=(multi(num1,num2));
                printf("El resultado de la multiplicacion es: %.2f\n",multii);

                factor=factorial(num1);
                printf("El resultado del factorial es: %.2f\n",factor);

                while (num2==0)
                {
                printf("Error. B no puede ser 0. Ingrese otro valor: ");
                scanf("%f", &num2);
                }
                divii=(divi(num1,num2));
                printf("El resultado de la division es: %.2f\n\n",divii);
                break;

            case 9: // Se sale del programa.
                seguir = 'n';
                printf("\n Gracias por utilizar este programa.\n");
                break;
        }

}
return 0;
}

