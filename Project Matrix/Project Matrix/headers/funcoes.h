//
//  funcoes.h
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#ifndef funcoes_h
#define funcoes_h

#include <stdio.h>

//  Funções de Matrizes

/**
 * @brief Soma de Matrizes ( A + B ).
 * @details Verifica a inicialização e soma as matrizes A e B.
 * Guardando o resultado em uma das três matrizes ( A, B ou C ).
 * @warning matrizes A e B devem ter sido inicializadas.
 * @see size.
 * @see choose.
 * @see point.
 */
void sum (void);
/**
 * @brief Subtração de Matrizes ( A - B ).
 * @details Verifica a inicialização e subtrai as matrizes A e B.
 * Guardando o resultado em uma das três matrizes ( A, B ou C ).
 * @warning matrizes A e B devem ter sido inicializadas.
 * @see size.
 * @see choose.
 * @see point.
 */
void sub (void);
/**
 * @brief Multiplicação de Matrizes ( A * B ).
 * @details Verifica a inicialização e multiplica as matrizes A e B.
 * Guardando o resultado em uma das três matrizes ( A, B ou C ).
 * @warning matrizes A e B devem ter sido inicializadas.
 * @see size.
 * @see choose.
 * @see point.
 */
void tim (void);
/**
 * @brief Mostra uma matriz.
 * @details Verifica a inicialização da matriz selecionada e a imprime na tela.
 * @param m Seleção de matriz.
 * @warning a matriz selecionada deve ter sido inicializada.
 * @see size.
 * @see choose.
 * @see point.
 */
void show (int m);
/**
 * @brief Altera as dimenções de uma matriz.
 * @param m Seleção de matriz.
 */
void size (int m);
/**
 * @brief Altera sequencialmente os valores de uma matriz.
 * @details Insere um a um os valores da matriz selecionada.
 * Até que ou a matriz tenha sido completamente alterada ou o usuário deseje parar a operação.
 * @param m Seleção de matriz.
 * @warning Matriz selecionada deve ter suas dimenções definidas!
 * @see size.
 */
void choose (int m);
/**
 * @brief altera um valor especifico de uma matriz.
 * @details recebe do usuário o valor e as cordenadas e os insere em uma matriz selecionada.
 * @param m Seleção de matriz.
 * @warning Matriz selecionada deve ter suas dimenções definidas!
 * @see size
 */
void point (int m);
/**
 * @brief Inversão de uma matriz.
 * @details Inverte a matriz selecionada.
 * @param m Seleção de matriz.
 * @warning Matriz deve ter sido inicializada!
 * @see size.
 * @see choose.
 * @see point.
 */
void inv (int m);
/**
 * @brief Transpõe uma matriz.
 * @details Transpõe a matriz selecionada.
 * @param m Seleção de matriz.
 * @warning Matriz deve ter sido inicializada!
 * @see size.
 * @see choose.
 * @see point.
 */
void transp (int m);
/**
 * @brief Substituição de matrizes.
 * @details Substitui ou a matriz A ou a matriz B pela matriz C.
 * Ignorando as dimenções da matriz substituida.
 * @param m Seleção de matriz.
 * @warning matriz C deve ter sido inicializada!
 * @see result
 */
void subst (int m);
/**
 * @brief substitui o string inserido em uma matriz.
 * @details Insere a matriz dada na matriz seleionada.
 * @param m Seleção de matrizes.
 * @param txt matriz para ser inserida.
 * @see sum.
 * @see sub.
 * @see tim.
 */
void result (int m, char txt[50]);




#endif /* funcoes_h */
