//
//  memory.h
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 31/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

/**
 * Funções de alocação de matrizes nos espaços de memória.
 */

#ifndef memory_h
#define memory_h

#include <stdio.h>

/**
 * @brief troca de matrizes.
 * @details troca as matrizes localizadas em X e Y.
 * @warning X e Y devem conter matrizes.
 * @see size.
 * @see choose.
 * @see point.
 * @see enter.
 * @see drop.
 * @see roll.
 */
void swap (void);
/**
 * @brief Sobe a coluna de matrizes.
 * @details Eleva as matrizes nos seus espaços definidos.\n
 * A localizada em X é copiada em Y, A de Y é transferida Z, a de Z é transferida W, e a de W é deletada.
 * @warning A matriz localizada em W é deletada!
 * @see drop.
 * @see roll.
 */
void enter (void);
/**
 * @brief Desçe a coluna de matrizes.
 * @details Desçe as matrizes de seus espaços definidos.\n
 * A localizada em W é copiada em Z, a de Z é transferida para Y, a de Y é tranferida para X, e a de X é deletada.
 * @warning Deleta a matriz contida em X.
 * @see enter.
 * @see swap.
 * @see roll.
 */
void drop (void);
/**
 * @brief Aloca os as matrizes contidas nos espaços de memoria.
 * @details Eleva a coluna de matrizes substituindo a matriz de W em X.\n
 * A localizada em X é transferida em Y, a de Y é transferida para Z, a de Z é tranferida para W e a de W é tranferida para X.
 * @warning Não há perda de matriz so troca de localização!
 * @see enter.
 * @see drop.
 * @see swap.
 */
void roll (void);

#endif /* memory_h */
