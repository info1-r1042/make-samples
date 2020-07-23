/*!
 * @file   main.c
 * @brief  GNU Make - Sample code
 * @author Javier Balloffet <javier.balloffet@gmail.com>
 * @date   Jul 5, 2019
 */
#include <stdio.h>
#include "functions.h"

int main() {
  int number;

  printf("Ingrese un numero: ");
  scanf("%d", &number);
  printf("Raiz cuadrada = %.2f\n", get_square_root(number));

  return 0;
}
