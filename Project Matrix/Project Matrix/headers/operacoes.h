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
void sum    (void);
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
void sub    (void);
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
void tim    (void);
/**
 * @brief substitui o string inserido em uma matriz.
 * @details Insere a matriz dada na matriz seleionada.
 * @param l seleção de local de memória.
 * @param m matriz para ser inserida.
 * @see sum.
 * @see sub.
 * @see tim.
 */
void result (int l, int m[100][100]);

#endif /* operacoes_h */
