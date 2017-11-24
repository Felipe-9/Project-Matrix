//
//  edit.h
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 31/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

/**
 * Funções de edição da matriz localizada em X.
 */

#ifndef edit_h
#define edit_h

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "timeline.h"
#include "memory.h"

/**
 * @brief Altera as dimenções de X.
 * @details Altera as dimenções da matriz localizada em X\n
 * Inserindo nos valores não pré existentes 0.\n
 * Inicializa uma matriz nula caso não exista matriz.
 * @param c Quantidade de colunas em X.
 * @param l Quantidade de linhas em X.
 * @see choose, point and mrand.
 */
void    size             (int c, int l);
/**
 * @brief Altera sequencialmente os valores de X.
 * @details Insere um a um os valores da matriz localizada em X.\n
 * Podendo mudar qual coordenada alterar o valor.
 * @warning Matriz deve ter suas dimenções definidas!
 * @see size, point and mrand.
 */
void    choose                   (void);
/**
 * @brief Altera um valor em uma coordenada especifica em X
 * @details Insere diretamente o valor fornecido pelo usuário as coordenadas selecionadas por ele.\n
 * Caso selecione uma coluna o valor é inserido sobre todas as linhas da mesma,\n
 * o contrário trocando linha por coluna tambem é verdadeiro,\n e se nao inserir nenhuma coordenada a matriz é preechida\n completamente com o valor inserido.
 * @see size, choose and mrand.
 * @warning Matriz precisa ser inicializada!
 */
void    point   (int c, int l, float v);
/**
 * @brief Transpozição de matriz.
 * @details Transpõe a matriz localizada em X.
 * @warning X deve conter uma matriz!
 * @see inv.
 */
void    transp                   (void);
/**
 * @brief Inversão de matriz.
 * @details Inverte a matriz localizada em X.
 * @warning X deve conter uma matriz!
 * @warning Determinante de X != 0!
 * @see transp.
 */
void    inv                      (void);
/**
 * @brief Insere sobre a matriz valore aleatórios.
 * @details Insere valores aleatorios dentro de um leque escolhido pelo usuário para cada cordenada da matriz.\n
 * O usuário pode escolher denter inserir valores inteiros ou floats dentro dos limites inseridos pelo mesmo tambem.
 * @param s Seleção de numeros inteiros ou floats.
 * @param i Limite inferior para os valores aleatórios.
 * @param j Limite superior para os valores aleatórios.
 * @warning Matriz de X deve ter suas dimenções definidas!
 * @see size, choose and point.
 */
void    mrand (int s, float i, float j);

/** @brief Modelo de matriz. */
struct matrix {
    int     ncolunas;           /**< Numero de colunlas da matriz          */
    int     nlinhas;            /**< Numero de linhas da matriz            */
    float   matriz[100][100];   /**< Corpo que guarda os valores da matriz */
};

#endif /* edit_h */
