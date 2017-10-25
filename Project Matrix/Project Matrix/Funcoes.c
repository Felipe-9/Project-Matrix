//
//  Funcoes.c
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "Funcoes.h"

int     interface               (int rs) {

    int r=1,tela=43;
    
    switch (rs) {
        case 1: /* Pagina de Inicialisacao  */  {
            
            Box2(9,10,
                 "##             ##    ##                                     ##      #\n"
                 " #              #     #                                      #      #\n"
                 " ####   ###    #      #    ###        ##  ##  ###   ## ##   #    ####\n"
                 " #  #  #   #   #     #    #  ##       # ###  ##  #   ##     #   ## ##\n"
                 " #  # ######   #     #   #    #       # # #  #   #   #      #   #   #\n"
                 " #  # #        #     #   #   #        ####   #   #  #      ##   #  ##\n"
                 "## ##  ####  #### #####  ####        ## ##   ####  ####   ####  #####\n");
            
            /*
            Box(1, 71, 1);
            printf("|  ##             ##    ##                                     ##      #  |\n"
                   "|   #              #     #                                      #      #  |\n"
                   "|   ####   ###    #      #    ###        ##  ##  ###   ## ##   #    ####  |\n"
                   "|   #  #  #   #   #     #    #  ##       # ###  ##  #   ##     #   ## ##  |\n"
                   "|   #  # ######   #     #   #    #       # # #  #   #   #      #   #   #  |\n"
                   "|   #  # #        #     #   #   #        ####   #   #  #      ##   #  ##  |\n"
                   "|  ## ##  ####  #### #####  ####        ## ##   ####  ####   ####  #####  |\n");
            Box (3,71,1);
            printf("\n\t\t\t\t1 - INITIALIZE PROGRAM\n"
                   "\t\t\t\t0 - SAIR\n");
            scanf("%d",&rs);
            pbreak(50);
            */
            
        } break;
        case 2: /* Menu inicial             */  {
            
            do{
                Box (1,tela,1);
                printf("|      Menu Principal                         |\n");
                Box (2,tela,1);
                printf("|  1 - Editar Valores                         |\n"
                       "|  2 - Operacoes                              |\n"
                       "|  3 - Mostrar Matrizes                       |\n");
                Box (2,tela,3);
                printf("|  4 - Sair                                   |\n");
                Box (3,tela,1);
                printf("\n$ ");
                scanf("%d",&rs);
                pbreak(50);
                switch (rs){
                    case 1: rs = interface(3); r=0; break;
                    case 2: rs = interface(4); r=0; break;
                    case 3: rs = interface(5); r=0; break;
                    case 4: r=0;
                }
            } while (r==1);
        } break;
        case 3: /* Menu de Edicao           */  {
            
            r=1;
            do{
                Box (1,tela,1);
                printf("|  Editar qual Matriz?                        |\n");
                Box (2,tela,1);
                printf("|  1 - Matriz A                               |\n"
                       "|  2 - Matriz B                               |\n");
                Box (2,tela,1);
                printf("|  3 - Voltar                                 |\n");
                Box (3,tela,1);
                printf("$ ");
                scanf("%d",&rs);
                pbreak(50);
                
                switch (rs) {
                    case 1: rs = interface(7); r=0; break;
                    case 2: rs = interface(8); r=0; break;
                    case 3: rs = interface(2); r=0; break;
                }
            } while (r==1);
        } break;
        case 4: /* Menu de Operacoes        */  {
            
            r=1;
            do{
                Box(1,tela,1);
                printf("|  Realizar quais opercaoes com matrizes?     |\n");
                Box(2,tela,1);
                printf("|  1 - Somar        ( A + B )                 |\n"
                       "|  2 - Subtrair     ( A - B )                 |\n"
                       "|  3 - Multiplicar  ( A * B )                 |\n");
                Box(2,tela,1);
                printf("|  4 - Voltar                                 |\n");
                Box(3,tela,1);
                printf("\n$ ");
                scanf("%d",&rs);
                pbreak(50);
                
                switch (rs) {
                    case 1: rs = 99; r=0; break;
                    case 2: rs = 99; r=0; break;
                    case 3: rs = 99; r=0; break;
                    case 4: interface(2); r=0; break;
                }
            } while (r==1);
        } break;
        case 5: /* Menu Show                */  {
            
            r=1;
            do{
                Box(1,tela,1);
                printf("|  1 - Mostrar matriz A                       |\n"
                       "|  2 - Mostrar matriz B                       |\n"
                       "|  3 - Mostrar matriz C                       |\n");
                Box(2,tela,1);
                printf("|  4 - Voltar                                 |\n");
                Box(3,tela,1);
                printf("\n$ ");
                scanf("%d",&rs);
                pbreak(50);
                
                switch(rs){
                    case 1: rs = 99; r=0; break;
                    case 2: rs = 99; r=0; break;
                    case 3: rs = 99; r=0; break;
                    case 4: interface(2); r=0; break;
                }
            
            } while (r==1);
        } break;
        case 6: /* Menu Edicao geral        */  {
            
            Box(2,tela,1);
            printf("|  1 - Alterar as dimensoes da matriz         |\n"
                   "|  2 - Alterar todos os valores em sequencia  |\n"
                   "|  3 - Alterar um valor especifico            |\n"
                   "|  4 - Inverter a matriz                      |\n"
                   "|  5 - Transpor a matriz                      |\n"
                   "|  6 - substituir por uma matriz identidade   |\n");
            Box(2,tela,1);
            printf("|  7 - Voltar                                 |\n");
            Box(3,tela,1);
            printf("\n$ ");
            scanf("%d",&rs);
            pbreak(50);
            
        } break;
        case 7: /* Menu Edicao de A         */  {
            
            r=1;
            do{
                Box(1, tela, 1);
                printf("|  Para a matriz A:                           |\n");
                switch(interface(6)){
                    case 1: rs = 99; r=0; break;
                    case 2: rs = 99; r=0; break;
                    case 3: rs = 99; r=0; break;
                    case 4: rs = 99; r=0; break;
                    case 5: rs = 99; r=0; break;
                    case 6: rs = 99; r=0; break;
                    case 7: rs = interface(3); r=0; break;
                }
            } while (r==1);
            
        } break;
        case 8: /* Menu Edicao de B         */  {
            
            r=1;
            do{
                Box(1, tela, 1);
                printf("|  Para a matriz B:                           |\n");
                switch(interface(6)){
                    case 1: rs = 99; r=0; break;
                    case 2: rs = 99; r=0; break;
                    case 3: rs = 99; r=0; break;
                    case 4: rs = 99; r=0; break;
                    case 5: rs = 99; r=0; break;
                    case 6: rs = 99; r=0; break;
                    case 7: rs = interface(3); r=0; break;
                }
            } while (r==1);
            
        } break;
    }
    
    return rs;
    
}
void    Box    (int n, int x, int y) {
    
    int i,j,r=0,c3=0;
    
    if(n==3){
        c3=1;
        r=1;
    }
    
    do{
        switch (n) {
            case 1: /*  inicio      */  {
                for (i=1;i<=x+4;i++){
                    printf("_");
                }
                printf("\n");
                
            }
            case 2: /*  Meio vasio  */  {
                
                for (i=1;i<=y;i++){
                    printf("|");
                    for (j=1;j<=x+2;j++){
                        printf(" ");
                    }
                    printf("|\n");
                }
            }   if (c3==0) { break; }
            case 3: /*  Fim         */  {
                
                printf("|");
                for (i=1;i<=x+2;i++){
                    printf("_");
                }
                printf("|\n");
                r=0;
            } break;
        }
    } while (r==1);
}
void    Box2   (int h,int l, char txt[100]){
    
    int i,j,k=0,start=0;
    FILE *box;
    
    box = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/Materiais/A\&L\ Prog/Projetos/Project-Matrix/Project\ Matrix/.box/texto.txt", "w");
    fprintf(box, txt);
    
    fclose(box);
    
    fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/Materiais/A\&L\ Prog/Projetos/Project-Matrix/Project\ Matrix/.box/texto.txt", "r");
    
    do{
        for (i=0;i<strlen(txt);i++){
            switch (j) {
                case 1: printf("_"); break;
                case 2: printf("|  ");
                    do{
                        fscanf(box, "%s",txt[i]);
                        printf("%s",txt[i]);
                        k++;
                    } while (txt[i]!='\n');
                    do{
                        printf(" ");
                    } while (k!=(l-4));
                    printf("|\n");
                    ; break;
            }
        }
        i=0;
        j++;
    } while (j!=4);
    
    printf("%d\n",l);
}
void    pbreak               (int n) {
    
    while (n>0){
        printf("\n");
        n--;
    }
}













