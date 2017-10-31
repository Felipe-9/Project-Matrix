//
//  interface.c
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 30/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "interface.h"


int     interface                        (int rs) {
    
#define H 10
#define L 90
    
    int r=1;                        //  Cond. de Saida
    int i,j=0;                      //  Contadores
    char linha[100], texto[2000];   //  Grava recupera arquivo .txt
    FILE *menu;
    
    switch (rs) {
        case 1: /* Pagina de Inicialisacao  */  {
            
            do{
                menu = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/pm\ intro/pmi.txt","r");
                
                while(fgets(linha, sizeof(linha), menu)){ //   Guarda cada linha de pmi.txt em linha
                    for (i=0;i<strlen(linha);i++){  //  Guarda em sequencia cada linha em intro
                        texto[i+j]=linha[i];
                    }
                    texto[i+j]='\n';    //  Marca fim de cada linha de do arquivo .txt
                    j=j+i;
                }
                
                fclose(menu);
                
                pbreak(50);
                Box(0,103,texto);   //  Imprime a intro
                
                //  Espera resposta do usuário
                printf("\n\t\t\t\t1 - INITIALIZE PROGRAM\n"
                       "\t\t\t\t0 - SAIR\n\n$ ");
                scanf("%d",&rs);
                
                pbreak(50);
                
            } while (rs!=0&&rs!=1);
            
        } break;
        case 2: /* Menu inicial             */  {
            
            do{
                pbreak(50);
                Box (H,L,
                     "Menu Principal\n\n"
                     "1 - Editar Valores\n"
                     "2 - Operacoes\n"
                     "3 - Mostrar Matrizes\n"
                     "0 - Sair\n");
                
                printf("\n$ ");
                scanf("%d",&rs);
                
                switch (rs){ // Define qual ação realizar
                    case 1: rs = interface(3); r=0; break;
                    case 2: rs = interface(4); r=0; break;
                    case 3: rs = interface(5); r=0; break;
                    case 0: rs = 0; r=0; break;
                }
            } while (r!=0);
        } break;
        case 3: /* Menu de Edicao           */  {
            
            r=1;
            do{
                pbreak(50);
                Box (H,L,
                     "Editar qual Matriz?\n\n"
                     "1 - Matriz A\n"
                     "2 - Matriz B\n"
                     "0 - Voltar\n");
                
                printf("\n$ ");
                scanf("%d",&rs);
                
                switch (rs) { // Define qual ação realizar
                    case 1: rs = interface(6); r=0; break;
                    case 2: rs = interface(7); r=0; break;
                    case 0: rs = interface(2); r=0; break;
                }
            } while (r!=0);
        } break;
        case 4: /* Menu de Operacoes        */  {
            
            r=1;
            do{
                pbreak(50);
                Box(H,L,
                    "Realizar quais opercaoes com matrizes?\n\n"
                    "1 - Somar        ( A + B )\n"
                    "2 - Subtrair     ( A - B )\n"
                    "3 - Multiplicar  ( A * B )\n"
                    "0 - Voltar\n");
                printf("\n$ ");
                scanf("%d",&rs);
                
                switch (rs) { // Define qual ação realizar
                    case 1: rs =  1; r=0; break;
                    case 2: rs =  2; r=0; break;
                    case 3: rs =  3; r=0; break;
                    case 0: interface(2); r=0; break;
                }
            } while (r!=0);
        } break;
        case 5: /* Menu Show                */  {
            
            r=1;
            do{
                pbreak(50);
                Box(H,L,
                    "Mostrar qual Matriz?\n\n"
                    "1 - Mostrar matriz A\n"
                    "2 - Mostrar matriz B\n"
                    "3 - Mostrar matriz C\n"
                    "0 - Voltar\n");
                printf("\n$ ");
                scanf("%d",&rs);
                
                switch(rs){ // Define qual ação realizar
                    case 1: rs =  4; r=0; break;
                    case 2: rs =  5; r=0; break;
                    case 3: rs =  6; r=0; break;
                    case 0: interface(2); r=0; break;
                }
                
            } while (r!=0);
        } break;
        case 6: /* Menu Edicao de A        */  {
            
            do{
                pbreak(50);
                Box(H,L,
                    "Para a matriz A:\n\n"
                    "1 - Alterar as dimensoes da matriz   2 - Alterar todos os valores em sequencia\n"
                    "3 - Alterar um valor especifico      4 - Inverter a matriz\n"
                    "5 - Transpor a matriz                6 - Substituir pela matriz C\n"
                    "0 - Voltar\n");
                
                printf("\n$ ");
                scanf("%d",&rs);
                
                switch(rs){ // Define qual ação realizar
                    case 1: rs =  7; r=0; break;
                    case 2: rs =  8; r=0; break;
                    case 3: rs =  9; r=0; break;
                    case 4: rs = 10; r=0; break;
                    case 5: rs = 11; r=0; break;
                    case 6: rs = 12; r=0; break;
                    case 0: rs = interface(3); r=0; break;
                }
            } while (r!=0);
        } break;
        case 7: /* Menu Edicao de B        */  {
            
            do{
                pbreak(50);
                Box(H,L,
                    "Para a matriz B:\n\n"
                    "1 - Alterar as dimensoes da matriz   2 - Alterar todos os valores em sequencia\n"
                    "3 - Alterar um valor especifico      4 - Inverter a matriz\n"
                    "5 - Transpor a matriz                6 - Substituir pela matriz C\n"
                    "0 - Voltar\n");
                
                printf("\n$ ");
                scanf("%d",&rs);
                
                switch(rs){ // Define qual ação realizar
                    case 1: rs = 13; r=0; break;
                    case 2: rs = 14; r=0; break;
                    case 3: rs = 15; r=0; break;
                    case 4: rs = 16; r=0; break;
                    case 5: rs = 17; r=0; break;
                    case 6: rs = 18; r=0; break;
                    case 0: rs = interface(3); r=0; break;
                }
            } while (r!=0);
        } break;
    }
    
    return rs;
    
}
void    Box          (int h,int l, char txt[100]) {
    
    int i=1,j,k=0; // Contadores
    char line[100]; // Guarda e imprime linhas do texto inserido
    FILE *box; // Guarda o texto inserido
    
    box = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/box/texto.txt", "w");
    
    fprintf(box, "%s", txt); // Imprime o texto inserino no arquivo texto.txt
    
    fclose(box);
    
    box = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/box/texto.txt", "r");
    
    while (i<=3){
        switch (i) {
            case 1: /* Imprime a parte superior da caixa */ {
                
                for(j=0;j<l;j++){
                    printf("_");
                } printf("\n");
                
                printf("|");
                for (j=2;j<l;j++){
                    printf(" ");
                }
                printf("|\n");
                
            } break;
            case 2: /* Imprime o texto dentro da caixa */ {
                k=4;
                while(fgets(line, sizeof(line), box)){
                    line[strlen(line)-1]='\0';
                    k++;
                    printf("|  ");
                    printf("%s",line);
                    for (j=strlen(line);j<l-6;j++){
                        printf(" ");
                    } printf("  |\n");
                }
                for (j=k;j<h;j++){
                    printf("|  ");
                    for (k=0;k<l-6;k++){
                        printf(" ");
                    } printf("  |\n");
                }
            } break;
            case 3: /* Imprime a parte inferior da caixa */ {
                
                printf("|");
                for (j=2;j<l;j++){
                    printf(" ");
                }
                printf("|\n");
                
                printf("|");
                for(j=2;j<l;j++){
                    printf("_");
                } printf("|\n");
                
            } break;
        }
        i++;
    }
    
    
}
void    pbreak                            (int n) {
    while (n>0){
        printf("\n");
        n--;
    }
}
