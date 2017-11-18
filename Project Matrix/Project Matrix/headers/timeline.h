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
#include <stdlib.h>
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
 * @see showhide, sh_matriz, sh_help,\nminfo, info, interface.
 */
void    Box         (int h, int l, char txt[100]);
/**
 * @brief Quebra de linha.
 * @details Função estética.
 * @param n Numero de linhas que vai pular no terminal.
 **/
void    pbreak                            (int n);
/**
 * @brief imprime um arquivo .txt usando Box.
 * @details Procura um arquivo na memoria especificado e o imprime usando a função Box com dimenções definidas.
 * @param path local onde se encontra o arquivo.
 * @see Box, command, main, info, sh_help.
 */
void    interface                (char path[1000]);
/**
 * @brief Aloca funções do programa.
 * @details Recebe e interpreta o comando do usuário acionando as funções requeridas.
 * @return numero de finalização (0 - fim do programa).
 */
int     command                            (void);
/**
 * @brief Mostra detalhes de uma função
 * @details Mostra detalhes de cada função presente no programa.\n Ensinado como a ultilizar e se for necessário apresentar exemplos.
 * @param func função a qual INFO ira apresentar detalhes sobre.
 * @see minfo, command, interface, Box.
 */
void    info                      (char func[10]);
/**
 * @brief Mostra detalhes sobre a matriz
 * @details Calcula e mostra estatisticas referentes a matriz presente em X.\n Tais estatisticas são:\n\t- Dimensões da matriz;\n\t- Formato da matriz;\n
 * \t- Tipo de matriz;\n\t- Determinante*;\n\t- Nível de inicialização da matriz.\n
 * @warning *Não calcula determinante de matrizes quadradas de ordem > 3 !.
 * @see Box, command.
 */
void    minfo                              (void);
/**
 * @brief Liga ou desliga a ação de alguma função.
 * @details Liga ou desliga as funções inseridas sobre ela, alterando seu valor de acionamento dentro da memória.
 * @param s Ligar ou desligar alguma função (1 - Ligar, 0 - Desligar).
 * @param func Qual função ligar ou deligar*.
 * @warning *Liga ou deliga apenas as funções sh_(matriz ou help) !
 * @see sh_matriz, sh_help, command.
 */
void    showhide           (int s, char func[10]);
/**
 * @brief Mostra a matriz
 * @details Mostra dentro de chaves a matriz guardada dentro da memória X.\nSuporta mostrar matrizes incompletas!.
 * @see showhide, sh_help.
 * @warning Apenas é ativada quadno a função SHOWHIDE a configura para tal.
 */
void    sh_matriz                          (void);
/***/
float   precision                (float v, int n);
/**
 * @brief Mostra o menu help
 * @details Mostra dentro de uma caixa o menu de ajuda.
 * @see showhide, sh_help, Box, interface.
 * @warning Apenas é ativada quadno a função SHOWHIDE a configura para tal.
 */
void    sh_help                            (void);
/**
 * @brief Inicializa o programa.
 * @details altera algumas configurações para o padrão:\n\t- Manter escondidas a tela de ajuda e a matriz guardada em X.
 * @see showhide.
 */
void    initialise                         (void);
/**
 * @brief Logo
 * @details In this world is kill, or be killed.
 * @param acc Logo.
 */
void    flowey                     (char acc[10]);

#endif /* timeline_h */
