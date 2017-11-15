//
//  operacoes.h
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//


#ifndef operacoes_h
#define operacoes_h

#include <stdio.h>
#include "edit.h"

/**
 * @brief Soma de Matrizes ( Y + X ).
 * @details Verifica a existencia e soma as matrizes localizadas em X e Y.
 * Guardando o resultado em X.
 * @warning Os espaços X e Y devem conter matrizes.
 * @see size.
 * @see choose.
 * @see point.
 * @see swap.
 * @see enter.
 * @see drop.
 * @see roll.
 */
void    sum     (void);
/**
 * @brief Subtração de Matrizes ( Y - X ).
 * @details Verifica a existencia e subtrai da matriz localizada em Y a matriz localizada em X.
 * Guardando o resultado em X.
 * @warning X e Y devem conter matrizes!
 * @see size.
 * @see choose.
 * @see point.
 * @see swap.
 * @see enter.
 * @see drop.
 * @see roll
 */
void    sub     (void);
/**
 * @brief Multiplicação de Matrizes ( A * B ).
 * @details Verifica a existencia e multiplica as matrizes localizadas em X e Y.
 * Guardando o resultado em X.
 * @warning X e Y devem conter matrizes.
 * @see size.
 * @see choose.
 * @see point.
 * @see swap.
 * @see enter.
 * @see drop.
 * @see roll
 */
void    mtim    (void);
/***/
void    vtim   (int v);
/***/
void    mpow   (int v);

#endif /* operacoes_h */
