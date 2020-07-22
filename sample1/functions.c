/**
 * \file            functions.c
 * \brief           Ejemplo Makefile
 * \author          Javier Balloffet
 * \date            Jul 5, 2019
 * \details         Usar makefile para compilar, linkear y ejecutar
 */

#include <math.h>
#include "functions.h"

/**
 * \fn      float get_square_root(int a)
 * \brief   Devuelve la raíz cuadrada del número pasado como parámetro.
 * \author  Javier Balloffet
 * \date    Jul 5, 2019
 * \param   a Operando.
 * \return  Raíz cuadrada.
 */
float get_square_root(int a) {
    return sqrt(a);
}
