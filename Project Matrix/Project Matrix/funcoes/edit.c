//
//  edit.c
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 31/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "edit.h"

void size (int c, int l){
    
}
//  size
/*
void size (int c, int l){
    
    struct matrix x;                // Base para receber e alterar os valores para poder alterar a matriz localizada em X
    char dialog[1000];              // Menu de edição de dimensões de matriz
    char rs;                        // Recebe comando do usuário
    int r=1;                        // Cond de parada
    int i, j;                       // Contadores
    
    // 1a Etapa - Ler e escolher novas dimensões.
    
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/x.txt", "r");
    
    rewind(X);
    
    fscanf(X, "%d\n(%d,%d)\n", &x.verif, &x.ncolunas, &x.nlinhas);  // Recebe o N de inicialização e dimensões da matriz
    for (i=0;i<x.nlinhas;i++){                                      // Recebe Matriz existente
        for (j=0;j<x.ncolunas-1;j++){
            fscanf(X, "%d ", &x.matriz[j][i]);
        }
        fscanf(X, "%d\n", &x.matriz[j][i]);
    }
    
    fclose(X);
    
        do {
            printf("\n(%d,%d) -> (%d,%d) $ ", x.ncolunas, x.nlinhas, c, l);
            scanf("%c",&rs);
        
            switch (rs) {
                case 'i': { // Alterar N de linhas
                    printf("\n(%d,%d) -> (%d,%d) $ ", x.ncolunas, x.nlinhas, c, l);
                    c = chtoin();
                } break;
                case 'j': { // Alterar N de colunas
                    printf("\n(%d,%d) -> (%d,%d) $ ", x.ncolunas, x.nlinhas, c, l);
                    l = chtoin();
                } break;
                case 'c': { // Inserir novos valores
                    if ( (c!=0) && (l!=0) ){
                        r=0;
                    } else {
                        printf("\nDados insuficientes!\n");
                        i=0; while(i<2){ getchar(); i++; }
                    }
                } break;
                case 'q': { r=0; } break;   // Cancelar novos valores
            }
            
        } while (r==1);

    // 2a Etapa - Recebe novas dimensões e atribui á memória.
    
    if (rs=='c'){   // Verifica se usuário quer atribuir as novas dimensões a matriz
        
        X = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/x.txt", "w");
        
        rewind(X);
        
        switch (x.verif) {  // Verificação das novas dimensões para com as antigas
            case 2: { if ( (c>x.ncolunas) || (l>x.nlinhas) ){ x.verif = 2; } } break;    // Se as novas dimensões forem menores que as anteriores, matriz completa.
            case 0: { x.verif = 1; } break;                                 // Se as novas dimensões forem maiores que as anteriores, matriz incompleta.
        }
        
        fprintf(X, "%d\n(%d,%d)\n", x.verif, c, l); // Imprime N de inicialização e dimensões da matriz
        
        for (i=0;i<c;i++){                          // Imprime valores anteriores da matriz
            for (j=0;j<l-1;j++){
                if  ( (i<x.nlinhas) && (j<x.ncolunas-1) ){
                fprintf(X, "%d ", x.matriz[j][i]);
                } else { fprintf(X, "- "); }
            }
            if  ( (i<x.nlinhas) && (j<x.ncolunas-1) ){
                fprintf(X, "%d\n", x.matriz[j][i]);
            } else { fprintf(X, "-\n"); }
        }
        
        fclose(X);
    }
}
*/
void choose (void){
    
}
void point (int c, int l, int v){
    
}
//  Point
/*
void point (int c, int l, int v){
    
    int i, j, k;                // Contadores
    struct matrix x;            // Base de construção da matriz
    int r1=1, r2=1;             // Cond de parada
    char dialog[1000];          // Menu de edição de dimensões de matriz
    char rs;                    // Recebe respostas do usuário
    
    // 1a Etapa - Receber dados da matriz anterior:
    
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/x.txt", "r");
    
    rewind(X);
    
    fscanf(X, "%d\n(%d,%d)\n", &x.verif, &x.ncolunas, &x.nlinhas);  // Recebe o N de inicialização e dimensões da matriz
    for (i=0;i<x.nlinhas;i++){                                      // Recebe Matriz existente
        for (j=0;j<x.ncolunas-1;j++){
            fscanf(X, "%d ", &x.matriz[j][i]);
        }
        fscanf(X, "%d\n", &x.matriz[j][i]);
    }
    
    fclose(X);
    
    // 2a Etapa - Receber valores do usuário:
    
    if (x.verif==0) {   // Matriz sem dimensões definidas retorna ERRO
        Box(0, strlen("ERRO - Matriz sem dimensões definidas!"), "\nERRO - Matriz sem dimensões definidas!\n");
        i=0;
        while(i<2){getchar(); i++;}
    } else {        // Matriz com dimensões definidas
        i=0;
        while (r2==1) {    // Finalização da ação da função
            
            i++;
            c=0; l=0;
            
            while (r1==1) { // Finalização da colheita de valores e cordenadas
                sprintf(dialog,
                        "Inserir %do valor na matriz:\n\n"
                        "    %d      ->      (%d,%d)\n\n"
                        "i - Selecionar coluna\n"
                        "j - Selecionar linha\n"
                        "v - Selecionar valor\n\n"
                        "c - Confirmar   q - Voltar\n"
                        "C - Finalizar   Q - Cancelar\n", i, x.matriz[c][l], c, l);
                
                pbreak(50);
                Box(0, strlen("C - Finalizar   Q - Cancelar")+6, dialog);
                printf("\n$ ");
                scanf("%c", &rs);
                
                switch (rs){
                    case 'i': { c = chtoin(); } break;
                    case 'j': { l = chtoin(); } break;
                    case 'v': { x.matriz[c][l] = chtoin(); } break;
                    case 'c': { r1=0; } break;
                    case 'q': { r1=0; i=i-2; } break;
                    case 'C': { r1=0;  r2=0; } break;
                    case 'Q': { r1=0;  r2=0; } break;
                }
                
            }
            r1=1;
        }
    }
}
*/
void inv (void){
    
}
void transp (void){
    
}
void mrand (void){
    
}
int chtoin (char n[4]){
    
    int N;      // Inteiro convertido a partir do char
    int chi1, chi2;   // Contadores
    
    for (chi1=0;chi1<5;chi1++){  // Limpa qualquer character que não for um inteiro
        if (n[chi1]<'0'||n[chi1]>'9'){
            n[chi1]='\0';
        }
        if (chi1>2){   // Limpa N maiores que 3 digitos
            n[chi1]='\0';
        }
    }
    chi2=0;
    N=0;
    for (chi1=0;chi1<strlen(n);chi1++){  // Converte char em int
        N = N + ((n[chi1]-'0')*pow(10, strlen(n)-chi2-1));
        chi2++;
    }
    return N;
}
