//
//  memory.c
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 31/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "memory.h"

void    swap    (void) {
    
    int sw1, sw2;
    struct matrix x,y;
    FILE *X, *Y;
    
    // 1a Etapa: Recolhimento de dados:
    
    // Recebe dados para a matriz localizada em X:
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(X, "%d,(%d,%d)\n", &x.verif, &x.ncolunas, &x.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
    
    if (x.verif==2){    // Verifica se a matriz está completa antes de receber seus valores
        
        for (sw1=0; sw1<x.nlinhas; sw1++){ for (sw2=0; sw2<x.ncolunas-1; sw2++){  // Recebe os valores de X em um array
            fscanf(X, "%d " , &x.matriz[sw2][sw1]);
        }   fscanf(X, "%d\n", &x.matriz[sw2][sw1]);
        }
        
    }
    
    fclose(X);  // Finaliza recolhimento de dados de X
    
    // Recebe dados para a matriz localizada em Y:
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
    
    fscanf(Y, "%d,(%d,%d)\n", &y.verif, &y.ncolunas, &y.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
    
    if (y.verif==2){    // Verifica se a matriz está completa antes de receber seus valores
        
        for (sw1=0; sw1<y.nlinhas; sw1++){ for (sw2=0; sw2<y.ncolunas-1; sw2++){  // Recebe os valores de Y em um array
            fscanf(Y, "%d " , &y.matriz[sw2][sw1]);
        }   fscanf(Y, "%d\n", &y.matriz[sw2][sw1]);
        }
        
    }
    
    fclose(Y);  // Finaliza recolhimento de dados de Y
    
    
    // 2a Etapa: Troca de dados:
    
    // Imprime dados para a matriz localizada em X:
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
    
    fprintf(X, "%d,(%d,%d)\n", y.verif, y.ncolunas, y.nlinhas);   // Imprime valores para N de inicialização e dimensões da matriz
        
        for (sw1=0; sw1<y.nlinhas; sw1++){ for (sw2=0; sw2<y.ncolunas-1; sw2++){  // Imprime os valores de Y em X
            fprintf(X, "%d " , y.matriz[sw2][sw1]);
        }   fprintf(X, "%d\n", y.matriz[sw2][sw1]);
        }
    
    fclose(X);  // Finaliza inserção de Y em X
    
    // Recebe dados para a matriz localizada em Y:
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "w");
    
    fprintf(Y, "%d,(%d,%d)\n", x.verif, x.ncolunas, x.nlinhas);   // Imprime os valores de X em Y
    
        for (sw1=0; sw1<x.nlinhas; sw1++){ for (sw2=0; sw2<x.ncolunas-1; sw2++){  // Recebe os valores de Y em um array
            fprintf(Y, "%d " , x.matriz[sw2][sw1]);
        }   fprintf(Y, "%d\n", x.matriz[sw2][sw1]);
        }
    
    fclose(Y);  // Finaliza inserção de Y em X
    
    
    
}
void    enter   (void) {
    
    FILE *X, *Y, *Z, *W;
    int e1, e2;
    struct matrix a;
    
    // Copia Z em W:
    Z = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/z.txt", "r");
    W = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/w.txt", "w");
    
    fscanf(Z, "%d,(%d,%d)\n", &a.verif, &a.ncolunas, &a.nlinhas); fprintf(W, "%d,(%d,%d)\n", a.verif, a.ncolunas, a.nlinhas);
    
    if (a.verif>0){
        for (e1=0; e1<a.nlinhas; e1++) { for (e2=0; e2<a.ncolunas-1; e2++) {
            fscanf(Z, "%d " , &a.matriz[e2][e1]); fprintf(W, "%d " , a.matriz[e2][e1]);
        }   fscanf(Z, "%d\n", &a.matriz[e2][e1]); fprintf(W, "%d\n", a.matriz[e2][e1]);
        }
    }
    fclose(Z); fclose(W);
    
    // Copia Y em Z:
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
    Z = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/z.txt", "w");
    
    fscanf(Y, "%d,(%d,%d)\n", &a.verif, &a.ncolunas, &a.nlinhas); fprintf(Z, "%d,(%d,%d)\n", a.verif, a.ncolunas, a.nlinhas);
    
    if (a.verif>0){
        for (e1=0; e1<a.nlinhas; e1++) { for (e2=0; e2<a.ncolunas-1; e2++) {
            fscanf(Y, "%d " , &a.matriz[e2][e1]); fprintf(Z, "%d " , a.matriz[e2][e1]);
        }   fscanf(Y, "%d\n", &a.matriz[e2][e1]); fprintf(Z, "%d\n", a.matriz[e2][e1]);
        }
    }
    fclose(Y); fclose(Z);
    
    // Copia X em Y:
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "w");
    
    fscanf(X, "%d,(%d,%d)\n", &a.verif, &a.ncolunas, &a.nlinhas); fprintf(Y, "%d,(%d,%d)\n", a.verif, a.ncolunas, a.nlinhas);
    
    if (a.verif>0){
        for (e1=0; e1<a.nlinhas; e1++) { for (e2=0; e2<a.ncolunas-1; e2++) {
            fscanf(X, "%d " , &a.matriz[e2][e1]); fprintf(Y, "%d " , a.matriz[e2][e1]);
        }   fscanf(X, "%d\n", &a.matriz[e2][e1]); fprintf(Y, "%d\n", a.matriz[e2][e1]);
        }
    }
    
    fclose(X); fclose(Y);
    
}
void    drop    (void) {
    
    FILE *X, *Y, *Z, *W;
    int d1, d2;
    struct matrix a;
    
    // Copia Y em X:
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
    
    fscanf(Y, "%d,(%d,%d)\n", &a.verif, &a.ncolunas, &a.nlinhas); fprintf(X, "%d,(%d,%d)\n", a.verif, a.ncolunas, a.nlinhas);
    
    if (a.verif>0){
        for (d1=0; d1<a.nlinhas; d1++) { for (d2=0; d2<a.ncolunas-1; d2++) {
            fscanf(Y, "%d " , &a.matriz[d2][d1]); fprintf(X, "%d " , a.matriz[d2][d1]);
        }   fscanf(Y, "%d\n", &a.matriz[d2][d1]); fprintf(X, "%d\n", a.matriz[d2][d1]);
        }
    }
    fclose(Y); fclose(X);
    
    // Copia Z em Y:
    Z = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/z.txt", "r");
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "w");
    
    fscanf(Z, "%d,(%d,%d)\n", &a.verif, &a.ncolunas, &a.nlinhas); fprintf(Y, "%d,(%d,%d)\n", a.verif, a.ncolunas, a.nlinhas);
    
    if (a.verif>0){
        for (d1=0; d1<a.nlinhas; d1++) { for (d2=0; d2<a.ncolunas-1; d2++) {
            fscanf(Z, "%d " , &a.matriz[d2][d1]); fprintf(Y, "%d " , a.matriz[d2][d1]);
        }   fscanf(Z, "%d\n", &a.matriz[d2][d1]); fprintf(Y, "%d\n", a.matriz[d2][d1]);
        }
    }
    fclose(Z); fclose(Y);
    
    // Copia W em Z:
    W = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/w.txt", "r");
    Z = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/z.txt", "w");
    
    fscanf(W, "%d,(%d,%d)\n", &a.verif, &a.ncolunas, &a.nlinhas); fprintf(Z, "%d,(%d,%d)\n", a.verif, a.ncolunas, a.nlinhas);
    
    if (a.verif>0){
        for (d1=0; d1<a.nlinhas; d1++) { for (d2=0; d2<a.ncolunas-1; d2++) {
            fscanf(W, "%d " , &a.matriz[d2][d1]); fprintf(Z, "%d " , a.matriz[d2][d1]);
        }   fscanf(W, "%d\n", &a.matriz[d2][d1]); fprintf(Z, "%d\n", a.matriz[d2][d1]);
        }
    }
    
    fclose(W); fclose(Z);
    
}
void    roll    (void) {
    
    FILE *X, *Y, *Z, *W;
    int d1, d2;
    struct matrix a,x;
    
    // Salva X:
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(X, "%d,(%d,%d)\n", &x.verif, &x.ncolunas, &x.nlinhas);
    
    if (x.verif>0) {
        for (d1=0; d1<x.nlinhas; d1++){ for (d2=0; d2<x.ncolunas-1; d2++) {
            fscanf(X, "%d " , &x.matriz[d2][d1]);
        }   fscanf(X, "%d\b", &x.matriz[d2][d1]);
        }
    }
    
    fclose(X);
    
    // Copia Y em X:
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
    
    fscanf(Y, "%d,(%d,%d)\n", &a.verif, &a.ncolunas, &a.nlinhas); fprintf(X, "%d,(%d,%d)\n", a.verif, a.ncolunas, a.nlinhas);
    
    if (a.verif>0){
        for (d1=0; d1<a.nlinhas; d1++) { for (d2=0; d2<a.ncolunas-1; d2++) {
            fscanf(Y, "%d " , &a.matriz[d2][d1]); fprintf(X, "%d " , a.matriz[d2][d1]);
        }   fscanf(Y, "%d\n", &a.matriz[d2][d1]); fprintf(X, "%d\n", a.matriz[d2][d1]);
        }
    }
    fclose(Y); fclose(X);
    
    // Copia Z em Y:
    Z = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/z.txt", "r");
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "w");
    
    fscanf(Z, "%d,(%d,%d)\n", &a.verif, &a.ncolunas, &a.nlinhas); fprintf(Y, "%d,(%d,%d)\n", a.verif, a.ncolunas, a.nlinhas);
    
    if (a.verif>0){
        for (d1=0; d1<a.nlinhas; d1++) { for (d2=0; d2<a.ncolunas-1; d2++) {
            fscanf(Z, "%d " , &a.matriz[d2][d1]); fprintf(Y, "%d " , a.matriz[d2][d1]);
        }   fscanf(Z, "%d\n", &a.matriz[d2][d1]); fprintf(Y, "%d\n", a.matriz[d2][d1]);
        }
    }
    fclose(Z); fclose(Y);
    
    // Copia W em Z:
    W = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/w.txt", "r");
    Z = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/z.txt", "w");
    
    fscanf(W, "%d,(%d,%d)\n", &a.verif, &a.ncolunas, &a.nlinhas); fprintf(Z, "%d,(%d,%d)\n", a.verif, a.ncolunas, a.nlinhas);
    
    if (a.verif>0){
        for (d1=0; d1<a.nlinhas; d1++) { for (d2=0; d2<a.ncolunas-1; d2++) {
            fscanf(W, "%d " , &a.matriz[d2][d1]); fprintf(Z, "%d " , a.matriz[d2][d1]);
        }   fscanf(W, "%d\n", &a.matriz[d2][d1]); fprintf(Z, "%d\n", a.matriz[d2][d1]);
        }
    }
    
    fclose(W); fclose(Z);
    
    // Copia X em W:
    W = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/w.txt", "w");
    
    fprintf(W, "%d,(%d,%d)\n", x.verif, x.ncolunas, x.nlinhas);
    
    if (x.verif>0) {
        for (d1=0; d1<x.nlinhas; d1++){ for (d2=0; d2<x.ncolunas-1; d2++) {
            fprintf(W, "%d " , x.matriz[d2][d1]);
        }   fprintf(W, "%d\b", x.matriz[d2][d1]);
        }
    }
    
    fclose(W);
    
}
void    reset   (void) {
    
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/x.txt", "w");
    
    fprintf(X, "0,(0,0)\n");
    
    fclose(X);
    
    FILE *Y = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/y.txt", "w");
    
    fprintf(Y, "0,(0,0)\n");
    
    fclose(Y);
    
    FILE *Z = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/z.txt", "w");
    
    fprintf(Z, "0,(0,0)\n");
    
    fclose(Z);
    
    FILE *W = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/w.txt", "w");
    
    fprintf(W, "0,(0,0)\n");
    
    fclose(W);
    
}
void    clrt    (void) {
    
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/x.txt", "w");
    
    fprintf(X, "0,(0,0)\n");
    
    fclose(X);
    
}
void    clrv    (void) {
    
    int v1, v2;         // Contadores
    struct matrix x;    // Matriz X
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/x.txt", "r+");
    
    fscanf(X, "%d,(%d,%d)\n", &x.verif, &x.ncolunas, &x.nlinhas);   // Recebe valores de inicialização e dimensões de X
    
    if (x.verif>0) {
        fseek(X, 8, SEEK_SET);  // Aponta para inicio dos valores da matriz X
        for (v1=0; v1<x.nlinhas; v1++) { for (v2=0; v2<x.ncolunas-1; v2++) {    // Insere valor reconhecido como nulo
            fprintf(X, "1000 " );
        }   fprintf(X, "1000\n");
        }
    } else { Box(0, 40,"ERRO! - Matriz sem dimensões definidas!"); }    // Mensagem de ERRO
    
    fclose(X);
}
