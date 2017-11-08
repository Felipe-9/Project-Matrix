//
//  main.c
//  Project Matrix V3.1.7.1
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include <stdio.h>
#include "timeline.h"
#include "operacoes.h"
#include "edit.h"
#include "memory.h"



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
    pbreak(50);
    interface("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/intro/logo.txt");           // Mostra página de inicializacao
    while (command()!=0);           // Interpreta imput do usuário
    return 0;
}
