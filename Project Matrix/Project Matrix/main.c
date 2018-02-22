//
//  main.c
//  Project Matrix V6.3
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
 * @see initialize, pbreak, interface and command.
 **/
int main() {
    initialise();
    pbreak(50);
    interface("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/intro/logo.txt");           // Mostra página de inicializacao
    while (command()!=0);                               // Interpreta imput do usuário
    return 0;
}
