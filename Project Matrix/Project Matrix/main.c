//
//  main.c
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include <stdio.h>
#include "funcoes.h"
#include "interface.h"
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
                case  1: /* Somar                         ( A + B ) */  { sum    ( ); } break;
                case  2: /* Subtrair                      ( A - B ) */  { sub    ( ); } break;
                case  3: /* Multiplicar                   ( A * B ) */  { tim    ( ); } break;
                case  4: /* Mostrar matriz                        A */  { show   (1); } break;
                case  5: /* Mostrar matriz                        B */  { show   (2); } break;
                case  6: /* Mostrar matriz                        C */  { show   (3); } break;
                case  7: /* Alterar as dimensoes da matriz        A */  { size   (1); } break;
                case  8: /* Alterar todos os valores em sequencia A */  { choose (1); } break;
                case  9: /* Alterar um valor especifico           A */  { point  (1); } break;
                case 10: /* Inverter a matriz                     A */  { inv    (1); } break;
                case 11: /* Transpor a matriz                     A */  { transp (1); } break;
                case 12: /* Substituir pela matriz C              A */  { subst  (1); } break;
                case 13: /* Alterar as dimensoes da matriz        B */  { size   (2); } break;
                case 14: /* Alterar todos os valores em sequencia B */  { choose (2); } break;
                case 15: /* Alterar um valor especifico           B */  { point  (2); } break;
                case 16: /* Inverter a matriz                     B */  { inv    (2); } break;
                case 17: /* Transpor a matriz                     B */  { transp (2); } break;
                case 18: /* Substituir pela matriz C              B */  { subst  (2); } break;
                case  0: /* Sair                                    */  { sair = 0;     } break;
            }
        } while (sair!=0);
    }
    return 0;
}
