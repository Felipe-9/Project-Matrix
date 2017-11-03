//
//  main.c
//  Project Matrix V2.2.1
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include <stdio.h>
#include "operacoes.h"
#include "interface.h"
#include "edit.h"
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
    
    interface(1);        // Mostra página de inicializacao.
        
        do{
            switch (interface(2)) { // Usuario define opreção do programa.
                case  1: /* Enter / Subir coluna                    */  { enter  (); } break;
                case  2: /* Drop / Descer coluna                    */  { drop   (); } break;
                case  3: /* Swap / Alocação de matrizes             */  { swap   (); } break;
                case  4: /* roll / Alocação de matrizes             */  { roll   (); } break;
                case  5: /* Alterar as dimensoes da matriz        X */  { size   (); } break;
                case  6: /* Alterar todos os valores em sequencia X */  { choose (); } break;
                case  7: /* Alterar um valor especifico           X */  { point  (); } break;
                case  8: /* Inserir valores aleatórios            X */  { mrand  (); } break;
                case  9: /* Inverter a matriz                     x */  { inv    (); } break;
                case 10: /* Transpor a matriz                     X */  { transp (); } break;
                case 11: /* Somar                         ( Y + X ) */  { sum    (); } break;
                case 12: /* Subtrair                      ( Y - X ) */  { sub    (); } break;
                case 13: /* Multiplicar                   ( Y * X ) */  { tim    (); } break;
                case  0: /* Sair                                    */  { sair = 0;   } break;
            }
        } while (sair!=0);
    return 0;
}
