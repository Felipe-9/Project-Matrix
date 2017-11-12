//
//  timeline.h
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 30/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#ifndef timeline_h
#define timeline_h

#include <stdio.h>
#include "operacoes.h"
#include "edit.h"
#include "memory.h"

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
/***/
void    interface                (char path[1000]);
/***/
int     command                            (void);
/***/
void    info                      (char func[10]);
/***/
void    minfo                              (void);
/***/
void    reset                              (void);
/***/
void    showhide           (int s, char func[10]);
/***/
void    sh_matriz                          (void);
/***/
void    sh_help                            (void);
/***/
void    initialise                         (void);

#endif /* timeline_h */
