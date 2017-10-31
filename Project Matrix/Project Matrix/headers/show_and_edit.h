//
//  show_and_edit.h
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 31/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#ifndef show_and_edit_h
#define show_and_edit_h

#include <stdio.h>

/**
 * @brief Mostra uma matriz.
 * @details Verifica no espaço selecionado a existencia de uma matriz e a imprime na tela.
 * @param l seleção de local de memória.
 * @warning O espaço selecionado deve conter uma matriz!
 * @see size.
 * @see choose.
 * @see point.
 * @see swap.
 * @see enter.
 * @see drop.
 * @see roll
 */
void show  (int l);
/**
 * @brief Altera as dimenções de uma matriz.
 * @details Se não existir matriz no local selecionado cria uma matriz apenas com dimenções definidas, necessitando atribuir a ela valores.\n
 * Se existir, altera as dimenções desta e caso as novas dimenções forem maiores que a anterior, sera necessario atribuir a ela valores a tais novos espaços.\n\n
 * Inicializa parcialmente a matriz no local selecionado.
 * @param l seleção de local de memória.
 * @see choose.
 * @see point.
 */
void size  (int l);
/**
 * @brief Altera sequencialmente os valores de uma matriz.
 * @details Insere um a um os valores da matriz localizada em X.
 * Até que ou a matriz tenha sido completamente alterada ou o usuário deseje parar a operação.\n\n
 * Inicializa completamente a matriz localizada em X.
 * @warning Matriz deve ter suas dimenções definidas!
 * @see size.
 */
void choose (void);
/**
 * @brief altera um valor especifico de uma matriz.
 * @details recebe do usuário o valor e as cordenadas e os insere na matriz localizada em X.
 * @see size
 * @warning Não inicializa completamente a matriz caso tal não tenha valores previamente definidos!
 */
void point  (void);
/**
 * @brief Inversão de matriz.
 * @details Inverte a matriz localizada em X.
 * @warning X deve conter uma matriz!
 * @see size.
 * @see choose.
 * @see point.
 */
void inv    (void);
/**
 * @brief Transpozição de matriz.
 * @details Transpõe a matriz localizada em X.
 * @warning X deve conter uma matriz!
 * @see size.
 * @see choose.
 * @see point.
 */
void transp (void);

#endif /* show_and_edit_h */
