//
//  main.c
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include <stdio.h>
#include "Funcoes.h"
#include <time.h>
#include <stdlib.h>

/**
 * @brief Timeline do programa.
 * @details Permuta as funcoes do programa.
 * @see interface
 **/
int main() {
    
    int f = 1;
    
    if (interface(1)==1){ //  Pagina de inicializacao.
        
        do{
            switch (interface(2)) { // Usuario define opreção do programa.
                case  1: /* Somar                         ( A + B ) */  {} break;
                case  2: /* Subtrair                      ( A - B ) */  {} break;
                case  3: /* Multiplicar                   ( A * B ) */  {} break;
                case  4: /* Mostrar matriz                        A */  {} break;
                case  5: /* Mostrar matriz                        B */  {} break;
                case  6: /* Mostrar matriz                        C */  {} break;
                case  7: /* Alterar as dimensoes da matriz        A */  {} break;
                case  8: /* Alterar todos os valores em sequencia A */  {} break;
                case  9: /* Alterar um valor especifico           A */  {} break;
                case 10: /* Inverter a matriz                     A */  {} break;
                case 11: /* Transpor a matriz                     A */  {} break;
                case 12: /* Substituir pela matriz C              A */  {} break;
                case 13: /* Alterar as dimensoes da matriz        B */  {} break;
                case 14: /* Alterar todos os valores em sequencia B */  {} break;
                case 15: /* Alterar um valor especifico           B */  {} break;
                case 16: /* Inverter a matriz                     B */  {} break;
                case 17: /* Transpor a matriz                     B */  {} break;
                case 18: /* Substituir pela matriz C              B */  {} break;
                case  0: /* Sair                                    */  { f = 0; } break;
            }
        } while (f!=0);
    }
    return 0;
}
