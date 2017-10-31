//
//  main.c
//  Project Matrix V4.0
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include <stdio.h>
#include "operacoes.h"
#include "interface.h"
#include "show_and_edit.h"
#include "memory.h"
#include <time.h>
#include <stdlib.h>

/**
 * @brief Timeline do programa.
 * @details Permuta as funcoes do programa.
 * @see interface.
 * @see sum.
 * @see sub.
 * @see tim.
 * @see show.
 * @see size.
 * @see choose.
 * @see point.
 * @see inv.
 * @see transp.
 * @see subst.
 **/
int main() {
    
    int sair = 1;       // Condição de saída
    
    if (interface(1)==1){ //  Página de inicializacao.
        
        do{
            switch (interface(2)) { // Usuario define opreção do programa.
                case  1: /* Somar                         ( Y + X ) */  { sum    ( ); } break;
                case  2: /* Subtrair                      ( Y - X ) */  { sub    ( ); } break;
                case  3: /* Multiplicar                   ( Y * X ) */  { tim    ( ); } break;
                case  4: /* Mostrar matriz                        X */  { show   (1); } break;
                case  5: /* Mostrar matriz                        Y */  { show   (2); } break;
                case  6: /* Mostrar matriz                        Z */  { show   (3); } break;
                case  7: /* Mostrar matriz                        W */  { show   (4); } break;
                case  8: /* Alterar as dimensoes da matriz        X */  { size   (1); } break;
                case  9: /* Alterar todos os valores em sequencia X */  { choose ( ); } break;
                case 10: /* Alterar um valor especifico           X */  { point  ( ); } break;
                case 11: /* Inverter a matriz                     x */  { inv    ( ); } break;
                case 12: /* Transpor a matriz                     X */  { transp ( ); } break;
                case 13: /* Enter / Subir coluna                    */  { enter  ( ); } break;
                case 14: /* Drop / Descer coluna                    */  { drop   ( ); } break;
                case 15: /* Swap / Alocação de matrizes             */  { swap   ( ); } break;
                case 16: /* roll / Alocação de matrizes             */  { roll   ( ); } break;
                case  0: /* Sair                                    */  { sair = 0;   } break;
            }
        } while (sair!=0);
    }
    return 0;
}
