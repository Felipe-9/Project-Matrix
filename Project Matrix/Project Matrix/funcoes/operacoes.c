//
//  operacoes.c
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "operacoes.h"

void    sum                                  (void) {
    
    FILE *X, *Y;            // Recupera matrizes guardadas na memória
    struct matrix x,y;      // Recebe dados das matrizes
    int sum1, sum2;         // Contadores
    
    // 1a Etapa: Recolhimento de dados:
    
    // Recebe dados para a matriz localizada em X:
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(X, "(%d,%d)\n", &x.ncolunas, &x.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
    
    if (x.ncolunas>0 && x.nlinhas>0) {    // Verifica a existencia da matriz
        
        for (sum1=0; sum1<x.nlinhas; sum1++){ for (sum2=0; sum2<x.ncolunas-1; sum2++){  // Recebe os valores de X em um array
            fscanf(X, "%f " , &x.matriz[sum2][sum1]); }
            fscanf(X, "%f\n", &x.matriz[sum2][sum1]); }
        
    
    fclose(X);  // Finaliza recolhimento de dados de X
    
    // Recebe dados para a matriz localizada em Y:
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
    
    fscanf(Y, "(%d,%d)\n", &y.ncolunas, &y.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
    
        if (y.ncolunas>0 && y.nlinhas>0) {    // Verifica se a matriz está completa antes de receber seus valores
            
            if (x.ncolunas == y.ncolunas && x.nlinhas == y.nlinhas) {   // Verifica se as matrizes tem as mesmas dimensões
            
            for (sum1=0; sum1<y.nlinhas; sum1++) { for (sum2=0; sum2<y.ncolunas-1; sum2++) {  // Recebe os valores de Y em um array
                fscanf(X, "%f " , &y.matriz[sum2][sum1]); }
                fscanf(X, "%f\n", &y.matriz[sum2][sum1]); }
            
    
    // 2a Etapa - Somar matrizes:
        
        for (sum1=0; sum1<x.nlinhas; sum1++) { for (sum2=0; sum2<x.ncolunas; sum2++) {   // Soma e guarda os resultados no array de x
            x.matriz[sum2][sum1] = x.matriz[sum2][sum1] + y.matriz[sum2][sum1];
        }
        }
        
        
        // 3a Etapa - Salvar resultados e alocar memória:
        
        drop(); // Aloca memória
        
        // Salva X:
        X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
        
        fprintf(X, "(%d,%d)\n", x.ncolunas, x.nlinhas);   // Imprime valores para N de inicialização e dimensões da matriz
        
            for (sum1=0; sum1<x.nlinhas; sum1++){ for (sum2=0; sum2<x.ncolunas-1; sum2++){  // Imprime os valores de X
                fprintf(X, "%f " , x.matriz[sum2][sum1]); }
                fprintf(X, "%f\n", x.matriz[sum2][sum1]); }
                
                
        // Mensagens de ERRO!:
            } else { Box(0, 50, "ERRO! - Matrizes possuem dimensões incompativeis!\n"); }
        }     else { Box(0, 50, "ERRO! - Matriz Y sem dimensões definidas\n"); }
    }         else { Box(0, 50, "ERRO! - Matriz X sem dimensões definidas\n"); }
    fclose(X); fclose(Y);   // Finaliza operação
}
void    sub                                  (void) {
    
    FILE *X, *Y;    // Recupera matrizes guardadas na memória
    struct matrix x,y;      // Recebe dados das matrizes
    int sub1, sub2;         // Contadores
    
    // 1a Etapa: Recolhimento de dados:
    
    // Recebe dados para a matriz localizada em X:
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(X, "(%d,%d)\n", &x.ncolunas, &x.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
    
    if (x.ncolunas>0 && x.nlinhas>0) {    // Verifica a existencia da matriz
        
        for (sub1=0; sub1<x.nlinhas; sub1++){ for (sub2=0; sub2<x.ncolunas-1; sub2++){  // Recebe os valores de X em um array
            fscanf(X, "%f " , &x.matriz[sub2][sub1]); }
            fscanf(X, "%f\n", &x.matriz[sub2][sub1]); }
        
        
        fclose(X);  // Finaliza recolhimento de dados de X
        
        // Recebe dados para a matriz localizada em Y:
        Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
        
        fscanf(Y, "(%d,%d)\n", &y.ncolunas, &y.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
        
        if (y.ncolunas>0 && y.nlinhas>0) {    // Verifica se a matriz está completa antes de receber seus valores
            
            if (x.ncolunas == y.ncolunas && x.nlinhas == y.nlinhas) {   // Verifica se as matrizes tem as mesmas dimensões
                
                for (sub1=0; sub1<y.nlinhas; sub1++) { for (sub2=0; sub2<y.ncolunas-1; sub2++) {  // Recebe os valores de Y em um array
                    fscanf(X, "%f " , &y.matriz[sub2][sub1]); }
                    fscanf(X, "%f\n", &y.matriz[sub2][sub1]); }
    
    
    // 2a Etapa - Somar matrizes:
    
    for (sub1=0; sub1<x.nlinhas; sub1++) { for (sub2=0; sub2<x.ncolunas; sub2++){   // Soma e guarda os resultados no array de x
            x.matriz[sub2][sub1] = y.matriz[sub2][sub1] - x.matriz[sub2][sub1];
        }
        }
        
        
                // 3a Etapa - Salvar resultados e alocar memória:
                
                drop(); // Aloca memória
                
                // Salva X:
                X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
                
                fprintf(X, "(%d,%d)\n", x.ncolunas, x.nlinhas);   // Imprime valores para N de inicialização e dimensões da matriz
                
                for (sub1=0; sub1<x.nlinhas; sub1++){ for (sub2=0; sub2<x.ncolunas-1; sub2++){  // Imprime os valores de X
                    fprintf(X, "%f " , x.matriz[sub2][sub1]); }
                    fprintf(X, "%f\n", x.matriz[sub2][sub1]); }
                
                
                // Mensagens de ERRO!:
            } else { Box(0, 50, "ERRO! - Matrizes possuem dimensões incompativeis!\n"); }
        }     else { Box(0, 50, "ERRO! - Matriz Y sem dimensões definidas\n"); }
    }         else { Box(0, 50, "ERRO! - Matriz X sem dimensões definidas\n"); }
    fclose(X); fclose(Y);
}
void    mtim                                 (void) {
    
    FILE *X, *Y;
    struct matrix x,y,r;
    int mt1, mt2, mt3, mt4;
    
    // 1a Etapa: Recolhimento de dados:
    
    // Recebe dados para a matriz localizada em X:
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(X, "(%d,%d)\n", &x.ncolunas, &x.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
    
    if (x.ncolunas>0 && x.nlinhas>0) {    // Verifica a existencia da matriz
        
        for (mt1=0; mt1<x.nlinhas; mt1++){ for (mt2=0; mt2<x.ncolunas-1; mt2++){  // Recebe os valores de X em um array
            fscanf(X, "%f " , &x.matriz[mt2][mt1]); }
            fscanf(X, "%f\n", &x.matriz[mt2][mt1]); }
        
        
        fclose(X);  // Finaliza recolhimento de dados de X
        
        // Recebe dados para a matriz localizada em Y:
        Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
        
        fscanf(Y, "(%d,%d)\n", &y.ncolunas, &y.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
        
        if (y.ncolunas>0 && y.nlinhas>0) {    // Verifica se a matriz está completa antes de receber seus valores
            
            if (x.ncolunas == y.nlinhas && x.nlinhas == y.ncolunas) {   // Verifica se as matrizes são compativeis
                
                for (mt1=0; mt1<y.nlinhas; mt1++) { for (mt2=0; mt2<y.ncolunas-1; mt2++) {  // Recebe os valores de Y em um array
                    fscanf(X, "%f " , &y.matriz[mt2][mt1]); }
                    fscanf(X, "%f\n", &y.matriz[mt2][mt1]); }
        
        // 2a Etapa - Multiplicar:
        
                for (mt1=0; mt1<y.nlinhas; mt1++) { for (mt2=0; mt2<x.ncolunas; mt2++) { for (mt3=0, mt4=0; mt3<y.ncolunas; mt3++) {
                    mt4 = mt4 + y.matriz[mt3][mt1] * x.matriz[mt2][mt3]; }
                    r.matriz[mt2][mt1] = mt4; }
                }
        
        
                // 3a Etapa - Salvar resultados e alocar memória:
                
                drop(); // Aloca memória
                
                // Salva X:
                X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
                
                fprintf(X, "(%d,%d)\n", x.ncolunas, y.nlinhas);   // Imprime valores para N de inicialização e dimensões da matriz
                
                for (mt1=0; mt1<y.nlinhas; mt1++){ for (mt2=0; mt2<x.ncolunas-1; mt2++){  // Imprime os valores de X
                    fprintf(X, "%f " , r.matriz[mt2][mt1]); }
                    fprintf(X, "%f\n", r.matriz[mt2][mt1]); }
                
                
                // Mensagens de ERRO!:
            } else { Box(0, 50, "ERRO! - Matrizes possuem dimensões incompativeis!\n"); }
        }     else { Box(0, 50, "ERRO! - Matriz Y sem dimensões definidas\n"); }
    }         else { Box(0, 50, "ERRO! - Matriz X sem dimensões definidas\n"); }
    fclose(X); fclose(Y);   // Finaliza operação
}
void    vtim                              (float v) {
    
    int vt1,vt2;        // Contadores
    struct matrix x;    // Guarda valores da matriz X
    
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r+");
    
    rewind(X);
    
    fscanf(X, "(%d,%d)\n", &x.ncolunas, &x.nlinhas);   // Recebe numero de colunas e linhas da matriz
    
    if (x.ncolunas>0 && x.nlinhas>0) {    // Verifica existencia da matriz
        
        for (vt1=0; vt1<x.nlinhas; vt1++) { for (vt2=0; vt2<x.ncolunas-1; vt2++) {  // Recebe valores de X
            fscanf (X, "%f " , &x.matriz[vt2][vt1]); }
            fscanf (X, "%f\n", &x.matriz[vt2][vt1]); }
        
        rewind(X); fscanf(X, "(%d,%d)\n", &x.ncolunas, &x.nlinhas);
        
        for (vt1=0; vt1<x.nlinhas; vt1++) { for (vt2=0; vt2<x.ncolunas-1; vt2++) {  // Imprime os valores de X multiplicando-os pelo valor inserido
            fprintf (X, "%f " , v * x.matriz[vt2][vt1]); }
            fprintf (X, "%f\n", v * x.matriz[vt2][vt1]); }
    }
    
    else { Box(0, 50, "ERRO! - Matriz incompleta!\n"); }  // Mensagem de ERRO
    
    fclose(X);  // Finaliza operação
}
void    mpow                                (int v) {
    
    int pow1, pow2, pow3, pow4; float rs;   // Contadores
    struct matrix x1, x2, r;                // Matrizes
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(X, "(%d,%d)\n", &x1.ncolunas, &x1.nlinhas);    // Recebe dados de X
    
    if (x1.ncolunas!=0 && x1.nlinhas!=0) {  // Verifica a existencia da matriz
        if (x1.ncolunas==x1.nlinhas) {      // Verifica se a matriz é compátivel com a função
        
        for (pow1=0; pow1<x1.nlinhas; pow1++) { for (pow2=0; pow2<x1.ncolunas-1; pow2++) {  // Recebe valores da matriz
            fscanf(X, "%f " , &x1.matriz[pow2][pow1]); x2.matriz[pow2][pow1] = x1.matriz[pow2][pow1]; }
            fscanf(X, "%f\n", &x1.matriz[pow2][pow1]); x2.matriz[pow2][pow1] = x1.matriz[pow2][pow1]; }
        
        fclose(X);  // Encerra coleta de dados
        
        for (pow1=0; pow1<v-1; pow1++) {                                                // Repete a operação quantas vezes foram requiridas pelo usuário
            for (pow2=0; pow2<x1.nlinhas; pow2++) {                                     // Conta cada linha de X
                for (pow3=0; pow3<x1.ncolunas; pow3++) {                                // Conta cada coluna de X
                    for (pow4=0, rs=0; pow4<x1.ncolunas; pow4++) {                      // Conta cada coluna de Y
                        rs = rs + x2.matriz[pow4][pow2] * x1.matriz[pow3][pow4]; }      // Realiza a multiplicação
                    r.matriz[pow3][pow2] = rs; }                                        // Salva resultado
            }
            for (pow2=0; pow2<x1.nlinhas; pow2++) { for (pow3=0; pow3<x1.ncolunas; pow3++) {    // Imprime resultado no operador
                x2.matriz[pow3][pow2] = r.matriz[pow3][pow2]; }
            }
        }
        
        // Salva resultado na memória:
        X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
        
        fprintf(X, "(%d,%d)\n", x1.ncolunas, x1.nlinhas);                      // Imprime dados de N de inicialização e dimensões
        
        for (pow1=0; pow1<x1.nlinhas; pow1++) { for (pow2=0; pow2<x1.ncolunas-1; pow2++) {  // Imprime matriz resultado na memória
            fprintf(X, "%f " , r.matriz[pow2][pow1]); }
            fprintf(X, "%f\n", r.matriz[pow2][pow1]); }
    
    // Mensagens de ERRO!:
        } else { Box(0, 40, "ERRO! - Matriz incompátivel!\n"   ); }
    }     else { Box(0, 40, "ERRO! - Matriz não quadrada!\n"); }
    
    fclose(X);  // Encerra toda a operação.
}
float   mdet    (float m[100][100], int dc, int dl) {
    
    int md1, md2;               // Contadores
    float det[4];               // Guarda os determinantes
    
    if (dc==dl && dc<4)  {     // Verifica se a matriz é quadrada e sua compatibilidade da matriz
            
            switch (dc) {
                case 1: { det[0] = m[0][0]; } break;
                case 2: { det[0] = (m[0][0]*m[1][1]) - (m[1][0]*m[0][1]); } break;
                case 3: {
                    
                    // Diagonais positivas:
                    
                    // 1a Diagonal positiva:
                    for (md1=0, det[1]=1; md1<3; md1++) { det[1] = det[1] * m[md1][md1]; }
                    
                    // 2a Diagonal positiva:
                    for (md1=0, det[2]=1; md1<3; md1++) { for (md2=0; md2<3; md2++) { if (md2+1==md1||md2==md1+2) {
                        det[2] = det[2] * m[md2][md1]; }
                    }
                    }
                    
                    // 3a Diagonal positiva:
                    for (md1=0, det[3]=1; md1<3; md1++) { for (md2=0; md2<3; md2++) { if (md2==md1+1||md2+2==md1) {
                        det[3] = det[3] * m[md2][md1]; }
                    }
                    }
                    
                    // Soma diagonais positivas:
                    for (md1=1, det[0]=0; md1<4; md1++) { det[0] = det[0] + det[md1]; }
                    
                    // Diagonais negativas:
                    
                    // 1a Diagonal negativa:
                    for (md1=0, md2=2, det[1]=1; md1<3; md1++, md2--) { det[1] = det[1] * m[md2][md1]; }
                    
                    // 2a Diagonal negativa:
                    for (md1=0, det[2]=1; md1<3; md1++){ for (md2=0; md2<3; md2++) { if ((md2+md1)==1 || (md2==2 && md1==2) ) {
                        det[2] = det[2]*m[md2][md1]; }
                    }
                    }
                    
                    // 3a Diagonal negativa:
                    for (md1=0, det[3]=1; md1<3; md1++) { for (md2=0; md2<3; md2++) { if (md2+md1==3 || (md2==0 && md1==0) ) {
                        det[3] = det[3] * m[md2][md1]; }
                    }
                    }
                    
                    // Subtrai diagonais negativas:
                    for (md1=1; md1<4; md1++) { det[0] = det[0] - det[md1]; }
                    
                } break;
            }
        } else { Box(0, 50, "ERRO! - Matriz incompativel!\n"); }
    
    return det[0];
}
