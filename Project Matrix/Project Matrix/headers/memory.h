//
//  memory.h
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 31/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//


#ifndef memory_h
#define memory_h

#include <stdio.h>
#include "edit.h"

/**
 * @brief Troca as matrizes em X e Y.
 * @warning X e Y devem conter matrizes.
 * @see enter, drop and roll.
 */
void    swap    (void);
/**
 * @brief Sobe a coluna de matrizes.
 * @details Eleva as matrizes nos seus espaços definidos.\n
 * Copia Z em W;\n
 *       Y em Z;\n
 *       X em Y.\n
 * @warning A matriz localizada em W é deletada!
 * @see swap, drop and roll.
 */
void    enter   (void);
/**
 * @brief Desçe a coluna de matrizes.
 * @details Desçe as matrizes de seus espaços definidos.\n
 * Copia Y em X;\n
 *       Z em Y;\n
 *       W em Z;\n
 * @warning Deleta a matriz localizada em X.
 * @see swap, enter and roll.
 */
void    drop    (void);
/**
 * @brief Aloca os as matrizes contidas nos espaços de memoria.
 * @details Eleva a coluna de matrizes substituindo a matriz de W em X.\n
 * Salva X em R;\n
 * Copia Y em X;\n
 *       Z em Y;\n
 *       W em Z;\n
 *       R em W;\n
 * @warning Não há perda de matriz so troca de localização!
 * @see swap, enter and drop.
 */
void    roll    (void);
/**
 * @brief Reseta memória.
 * @details Reseta todas as matrizes na mémoria.
 * @warnig Todas as matrizes são perdidas!
 * @see clr.
 */
void    reset   (void);
/**
 * @brief Reseta a matriz X.
 * @details Reseta completamente a matriz localizada em X.\n
 * Zera numero de inicialização e dimensões.
 * @waring Perda da matriz localizada em X.
 * @see reset.
 */
void    clr     (void);

#endif /* memory_h */
