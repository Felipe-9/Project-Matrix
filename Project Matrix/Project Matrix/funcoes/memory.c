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
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(X, "(%d,%d)\n", &x.ncolunas, &x.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
    
    if (x.ncolunas>0 && x.nlinhas>0) {    // Verifica se a matriz está completa antes de receber seus valores
        
        for (sw1=0; sw1<x.nlinhas; sw1++){ for (sw2=0; sw2<x.ncolunas-1; sw2++){  // Recebe os valores de X em um array
            fscanf(X, "%f " , &x.matriz[sw2][sw1]); }
            fscanf(X, "%f\n", &x.matriz[sw2][sw1]); }
        
    }
    
    fclose(X);  // Finaliza recolhimento de dados de X
    
    // Recebe dados para a matriz localizada em Y:
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
    
    fscanf(Y, "(%d,%d)\n", &y.ncolunas, &y.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
    
    if (y.ncolunas>0 && y.nlinhas>0){    // Verifica se a matriz está completa antes de receber seus valores
        
        for (sw1=0; sw1<y.nlinhas; sw1++){ for (sw2=0; sw2<y.ncolunas-1; sw2++){  // Recebe os valores de Y em um array
            fscanf(Y, "%f " , &y.matriz[sw2][sw1]); }
            fscanf(Y, "%f\n", &y.matriz[sw2][sw1]); }
    }
    
    fclose(Y);  // Finaliza recolhimento de dados de Y
    
    
    // 2a Etapa: Troca de dados:
    
    // Imprime dados para a matriz localizada em X:
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
    
    fprintf(X, "(%d,%d)\n", y.ncolunas, y.nlinhas);   // Imprime valores para N de inicialização e dimensões da matriz
    
    if (y.ncolunas>0 && y.nlinhas>0) {
        
        for (sw1=0; sw1<y.nlinhas; sw1++){ for (sw2=0; sw2<y.ncolunas-1; sw2++){  // Imprime os valores de Y em X
            fprintf(X, "%f " , y.matriz[sw2][sw1]); }
            fprintf(X, "%f\n", y.matriz[sw2][sw1]); }
    }
    
    fclose(X);  // Finaliza inserção de Y em X
    
    // Recebe dados para a matriz localizada em Y:
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "w");
    
    fprintf(Y, "(%d,%d)\n", x.ncolunas, x.nlinhas);   // Imprime os valores de X em Y
    
    if (x.ncolunas>0 && x.nlinhas>0) {
        
        for (sw1=0; sw1<x.nlinhas; sw1++){ for (sw2=0; sw2<x.ncolunas-1; sw2++){  // Recebe os valores de Y em um array
            fprintf(Y, "%f " , x.matriz[sw2][sw1]); }
            fprintf(Y, "%f\n", x.matriz[sw2][sw1]); }
    }
    
    fclose(Y);  // Finaliza inserção de Y em X
}
void    enter   (void) {
    
    FILE *M, *_M;
    int e1, e2;
    struct matrix a;
    
    // Copia Z em W:
    M  = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/z.txt", "r");
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/w.txt", "w");
    
    fscanf(M, "(%d,%d)\n", &a.ncolunas, &a.nlinhas); fprintf(_M, "(%d,%d)\n", a.ncolunas, a.nlinhas);
    
    if (a.ncolunas>0 && a.nlinhas>0) {
        
        for (e1=0; e1<a.nlinhas; e1++) { for (e2=0; e2<a.ncolunas-1; e2++) {
            fscanf(M, "%f " , &a.matriz[e2][e1]); fprintf(_M, "%f " , a.matriz[e2][e1]); }
            fscanf(M, "%f\n", &a.matriz[e2][e1]); fprintf(_M, "%f\n", a.matriz[e2][e1]); }
    }
    fclose(M); fclose(_M);
    
    // Copia Y em Z:
    M  = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/z.txt", "w");
    
    fscanf(M, "(%d,%d)\n", &a.ncolunas, &a.nlinhas); fprintf(_M, "(%d,%d)\n", a.ncolunas, a.nlinhas);
    
    if (a.ncolunas>0 && a.nlinhas>0) {
        
        for (e1=0; e1<a.nlinhas; e1++) { for (e2=0; e2<a.ncolunas-1; e2++) {
            fscanf(M, "%f " , &a.matriz[e2][e1]); fprintf(_M, "%f " , a.matriz[e2][e1]); }
            fscanf(M, "%f\n", &a.matriz[e2][e1]); fprintf(_M, "%f\n", a.matriz[e2][e1]); }
    }
    fclose(M); fclose(_M);
    
    // Copia X em Y:
    M  = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "w");
    
    fscanf(M, "(%d,%d)\n", &a.ncolunas, &a.nlinhas); fprintf(_M, "(%d,%d)\n", a.ncolunas, a.nlinhas);
    
    if (a.ncolunas>0 && a.nlinhas>0) {
        
        for (e1=0; e1<a.nlinhas; e1++) { for (e2=0; e2<a.ncolunas-1; e2++) {
            fscanf(M, "%f " , &a.matriz[e2][e1]); fprintf(_M, "%f " , a.matriz[e2][e1]); }
            fscanf(M, "%f\n", &a.matriz[e2][e1]); fprintf(_M, "%f\n", a.matriz[e2][e1]); }
    }
    fclose(M); fclose(_M);
}
void    drop    (void) {
    
    FILE *M, *_M;
    int d1, d2;
    struct matrix a;
    
    // Copia Y em X:
    M  = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
    
    fscanf(M, "(%d,%d)\n", &a.ncolunas, &a.nlinhas); fprintf(_M, "(%d,%d)\n", a.ncolunas, a.nlinhas);
    
    if (a.ncolunas>0 && a.nlinhas>0) {
        for (d1=0; d1<a.nlinhas; d1++) { for (d2=0; d2<a.ncolunas-1; d2++) {
            fscanf(M, "%f " , &a.matriz[d2][d1]); fprintf(_M, "%f " , a.matriz[d2][d1]);
        }   fscanf(M, "%f\n", &a.matriz[d2][d1]); fprintf(_M, "%f\n", a.matriz[d2][d1]);
        }
    }
    fclose(M); fclose(_M);
    
    // Copia Z em Y:
    M  = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/z.txt", "r");
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "w");
    
    fscanf(M, "(%d,%d)\n", &a.ncolunas, &a.nlinhas); fprintf(_M, "(%d,%d)\n", a.ncolunas, a.nlinhas);
    
    if (a.ncolunas>0 && a.nlinhas>0) {
        for (d1=0; d1<a.nlinhas; d1++) { for (d2=0; d2<a.ncolunas-1; d2++) {
            fscanf(M, "%f " , &a.matriz[d2][d1]); fprintf(_M, "%f " , a.matriz[d2][d1]);
        }   fscanf(M, "%f\n", &a.matriz[d2][d1]); fprintf(_M, "%f\n", a.matriz[d2][d1]);
        }
    }
    fclose(M); fclose(_M);
    
    // Copia W em Z:
    M  = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/w.txt", "r");
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/z.txt", "w");
    
    fscanf(M, "(%d,%d)\n", &a.ncolunas, &a.nlinhas); fprintf(_M, "(%d,%d)\n", a.ncolunas, a.nlinhas);
    
    if (a.ncolunas>0 && a.nlinhas>0) {
        for (d1=0; d1<a.nlinhas; d1++) { for (d2=0; d2<a.ncolunas-1; d2++) {
            fscanf(M, "%f " , &a.matriz[d2][d1]); fprintf(_M, "%f " , a.matriz[d2][d1]);
        }   fscanf(M, "%f\n", &a.matriz[d2][d1]); fprintf(_M, "%f\n", a.matriz[d2][d1]);
        }
    }
    fclose(M); fclose(_M);
    
}
void    roll    (void) {
    
    FILE *M, *_M;
    int d1, d2;
    struct matrix a,x;
    
    // Salva X:
    M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(M, "(%d,%d)\n", &x.ncolunas, &x.nlinhas);
    
    if (x.ncolunas>0 && x.nlinhas>0) {
        
        for (d1=0; d1<x.nlinhas; d1++){ for (d2=0; d2<x.ncolunas-1; d2++) {
            fscanf(M, "%f " , &x.matriz[d2][d1]); }
            fscanf(M, "%f\n", &x.matriz[d2][d1]); }
    }
    
    fclose(M);
    
    // Copia Y em X:
    M  = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
    
    fscanf(M, "(%d,%d)\n", &a.ncolunas, &a.nlinhas); fprintf(_M, "(%d,%d)\n", a.ncolunas, a.nlinhas);
    
    if (a.ncolunas>0 && a.nlinhas>0) {
        
        for (d1=0; d1<a.nlinhas; d1++) { for (d2=0; d2<a.ncolunas-1; d2++) {
            fscanf(M, "%f " , &a.matriz[d2][d1]); fprintf(_M, "%f " , a.matriz[d2][d1]); }
            fscanf(M, "%f\n", &a.matriz[d2][d1]); fprintf(_M, "%f\n", a.matriz[d2][d1]); }
    }
    fclose(M); fclose(_M);
    
    // Copia Z em Y:
    M  = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/z.txt", "r");
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "w");
    
    fscanf(M, "(%d,%d)\n", &a.ncolunas, &a.nlinhas); fprintf(_M, "(%d,%d)\n", a.ncolunas, a.nlinhas);
    
    if (a.ncolunas>0 && a.nlinhas>0) {
        
        for (d1=0; d1<a.nlinhas; d1++) { for (d2=0; d2<a.ncolunas-1; d2++) {
            fscanf(M, "%f " , &a.matriz[d2][d1]); fprintf(_M, "%f " , a.matriz[d2][d1]); }
            fscanf(M, "%f\n", &a.matriz[d2][d1]); fprintf(_M, "%f\n", a.matriz[d2][d1]); }
    }
    fclose(M); fclose(_M);
    
    // Copia W em Z:
    M  = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/w.txt", "r");
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/z.txt", "w");
    
    fscanf(M, "(%d,%d)\n", &a.ncolunas, &a.nlinhas); fprintf(_M, "(%d,%d)\n", a.ncolunas, a.nlinhas);
    
    if (a.ncolunas>0 && a.nlinhas>0) {
        
        for (d1=0; d1<a.nlinhas; d1++) { for (d2=0; d2<a.ncolunas-1; d2++) {
            fscanf(M, "%f " , &a.matriz[d2][d1]); fprintf(_M, "%f " , a.matriz[d2][d1]); }
            fscanf(M, "%f\n", &a.matriz[d2][d1]); fprintf(_M, "%f\n", a.matriz[d2][d1]); }
    }
    fclose(M); fclose(_M);
    
    // Copia X em W:
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/w.txt", "w");
    
    fprintf(_M, "(%d,%d)\n", x.ncolunas, x.nlinhas);
    
    if (x.ncolunas>0 && x.nlinhas>0) {
        
        for (d1=0; d1<x.nlinhas; d1++){ for (d2=0; d2<x.ncolunas-1; d2++) {
            fprintf(_M, "%f " , x.matriz[d2][d1]); }
            fprintf(_M, "%f\n", x.matriz[d2][d1]); }
    }
    fclose(_M);
    
}
void    reset   (void) {
    
    FILE *_M;   // Corpo para resetar matrizes
    
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
    
    fprintf(_M, "(%d,%d)\n", 0, 0); fclose(_M);
    
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "w");
    
    fprintf(_M, "(%d,%d)\n", 0, 0); fclose(_M);
    
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/z.txt", "w");
    
    fprintf(_M, "(%d,%d)\n", 0, 0); fclose(_M);
    
    _M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/w.txt", "w");
    
    fprintf(_M, "(%d,%d)\n", 0, 0); fclose(_M);
    
}
void    clr     (void) {
    
    FILE *_M = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/UFRN/1o Semestre 2017.2/A&L Prog/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
    
    fprintf(_M, "(%d,%d)\n", 0, 0); fclose(_M);
}

