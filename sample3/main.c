/**
 * \file            main.c
 * \brief           Ejemplo Makefile
 * \author          Javier Balloffet
 * \date            Jul 5, 2019
 * \details         Usar makefile para compilar, linkear y ejecutar
 */

#include <stdio.h>
#include "functions.h"

int main() {
    int number;
    float squareRoot;

    /* 1. Solicito 1 número por consola */
    printf("Ingrese un numero: ");
    scanf("%d", &number);

    /* 2. Invoco a la función "get_square_root", pasándole "number" como argumento.
        Almaceno el valor que retorna la función en la variable "squareRoot" */
    squareRoot = get_square_root(number);

    /* 3. Imprimo en pantalla el resultado de la raíz cuadrada */
    printf("Raiz cuadrada = %.2f\n", squareRoot);

    return 0;
}
