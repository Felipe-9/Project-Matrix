//
//  main.c
//  Project Matrix V3.1.1.0
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include <stdio.h>
#include "operacoes.h"
#include "timeline.h"
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
    intro ();                       // Mostra página de inicializacao
    while (command()!=0);           // Interpreta imput do usuário
    return 0;
}
