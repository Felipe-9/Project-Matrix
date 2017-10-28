//
//  Funcoes.h
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#ifndef Funcoes_h
#define Funcoes_h

#include <stdio.h>

/**
 * @brief Interfaçe do usuário.
 * @details O guia pelo programa e define qual ação o programa irá realizar.
 * @param[in] rs Define qual menu exibir.
 * @return numero de ação do programa.
 * @see Box.
 * @see pbreak.
 * @warning rs recebe apenas numeros inteiros.
 */
int     interface                        (int rs);
/**
 * @brief Imprime texto inserido dentro de uma caixa.
 * @details Esta funcao tem papel estetico de introduzir texto posto sobre ela dentro de uma caixa de largura e altura definida.
 * @param h Define a altura da caixa.
 * @param l Define a largura da caixa.
 * @param txt texto que sera inserido dentro de uma caixa.\n
 * A finalização de uma linha deve ser indicada por "\n".
 * @return imprime na tela o texto inserido dentro de uma caixa.
 * @warning Dimensoes minimas no input - l = 6 + numero de caracteres da maior linha do texto.\n
 * h < 4 + numero de linhas do texto, imprime o tamanho minimo da caixa para o texto inserido.
 */
void    Box         (int h, int l, char txt[100]);
/**
 * @brief Quebra de linha.
 * @details Função estética.
 * @param n Numero de linhas que vai pular no terminal.
 **/
void    pbreak                            (int n);

#endif /* Funcoes_h */
