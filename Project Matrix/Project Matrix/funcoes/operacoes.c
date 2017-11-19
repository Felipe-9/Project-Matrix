//
//  operacoes.c
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "operacoes.h"

void    sum      (void) {
    
    FILE *X, *Y;            // Recupera matrizes guardadas na memória
    struct matrix x,y;      // Recebe dados das matrizes
    int sum1, sum2;         // Contadores
    
    // 1a Etapa: Recolhimento de dados:
    
    // Recebe dados para a matriz localizada em X:
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(X, "%d,(%d,%d)\n", &x.verif, &x.ncolunas, &x.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
    
    if (x.verif==1){    // Verifica se a matriz está completa antes de receber seus valores
        
        for (sum1=0; sum1<x.nlinhas; sum1++){ for (sum2=0; sum2<x.ncolunas-1; sum2++){  // Recebe os valores de X em um array
            fscanf(X, "%f " , &x.matriz[sum2][sum1]);
        }   fscanf(X, "%f\n", &x.matriz[sum2][sum1]);
        }
        
    }
    
    fclose(X);  // Finaliza recolhimento de dados de X
    
    // Recebe dados para a matriz localizada em Y:
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
    
    fscanf(Y, "%d,(%d,%d)\n", &y.verif, &y.ncolunas, &y.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
    
    if (y.verif==1){    // Verifica se a matriz está completa antes de receber seus valores
        
        for (sum1=0; sum1<y.nlinhas; sum1++){ for (sum2=0; sum2<y.ncolunas-1; sum2++){  // Recebe os valores de Y em um array
            fscanf(Y, "%f " , &y.matriz[sum2][sum1]);
        }   fscanf(Y, "%f\n", &y.matriz[sum2][sum1]);
        }
        
    }
    
    fclose(Y);  // Finaliza recolhimento de dados de Y
    
    
    // 2a Etapa - Somar matrizes:
    
    // Verifica se ambas as matrizes estão completas e tem as mesmas dimensões
    if ( ( x.verif==1 && y.verif==1 ) && ( x.ncolunas == y.ncolunas && x.nlinhas == y.nlinhas ) ) {
        
        for (sum1=0; sum1<x.nlinhas; sum1++) { for (sum2=0; sum2<x.ncolunas; sum2++){   // Soma e guarda os resultados no array de x
            x.matriz[sum2][sum1] = x.matriz[sum2][sum1] + y.matriz[sum2][sum1];
        }
        }
        
        
        // 3a Etapa - Salvar resultados e alocar memória:
        
        drop();
        
        // Salva X:
        X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
        
        fprintf(X, "%d,(%d,%d)\n", x.verif, x.ncolunas, x.nlinhas);   // Imprime valores para N de inicialização e dimensões da matriz
        
            for (sum1=0; sum1<x.nlinhas; sum1++){ for (sum2=0; sum2<x.ncolunas-1; sum2++){  // Imprime os valores de X
                fprintf(X, "%f " , x.matriz[sum2][sum1]);
            }   fprintf(X, "%f\n", x.matriz[sum2][sum1]);
            }
        
        fclose(X);
        
    }
    
    // Mensagens de ERRO!:
    else if ( x.verif==0 || y.verif==0                        ) { Box(0, 40, "ERRO! - Matriz em X ou em Y incompleta!\n"     ); }
    else if ( x.ncolunas!=y.nlinhas  || y.ncolunas!=y.nlinhas ) { Box(0, 40, "ERRO! - Matriz em X ou em Y não é quadrada!\n" ); }
    else if ( x.ncolunas!=y.ncolunas || x.nlinhas!=y.nlinhas  ) { Box(0, 40, "ERRO! - Matrizes de dimensões diferentes!\n"   ); }
    
}
void    sub      (void) {
    
    FILE *X, *Y;    // Recupera matrizes guardadas na memória
    struct matrix x,y;      // Recebe dados das matrizes
    int sub1, sub2;         // Contadores
    
    // 1a Etapa: Recolhimento de dados:
    
    // Recebe dados para a matriz localizada em X:
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(X, "%d,(%d,%d)\n", &x.verif, &x.ncolunas, &x.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
    
    if (x.verif==1){    // Verifica se a matriz está completa antes de receber seus valores
        
        for (sub1=0; sub1<x.nlinhas; sub1++){ for (sub2=0; sub2<x.ncolunas-1; sub2++){  // Recebe os valores de X em um array
            fscanf(X, "%f " , &x.matriz[sub2][sub1]);
        }   fscanf(X, "%f\n", &x.matriz[sub2][sub1]);
        }
        
    }
    
    fclose(X);  // Finaliza recolhimento de dados de X
    
    // Recebe dados para a matriz localizada em Y:
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
    
    fscanf(Y, "%d,(%d,%d)\n", &y.verif, &y.ncolunas, &y.nlinhas);   // Recolhe valores para N de inicialização e dimensões da matriz
    
    if (y.verif==1){    // Verifica se a matriz está completa antes de receber seus valores
        
        for (sub1=0; sub1<y.nlinhas; sub1++){ for (sub2=0; sub2<y.ncolunas-1; sub2++){  // Recebe os valores de Y em um array
            fscanf(Y, "%f " , &y.matriz[sub2][sub1]);
        }   fscanf(Y, "%f\n", &y.matriz[sub2][sub1]);
        }
        
    }
    
    fclose(Y);  // Finaliza recolhimento de dados de Y
    
    
    // 2a Etapa - Somar matrizes:
    
    // Verifica se ambas as matrizes estão completas e tem as mesmas dimensões
    if ( ( x.verif==1 && y.verif==1 ) && ( x.ncolunas == y.ncolunas && x.nlinhas == y.nlinhas ) ) {
        
        for (sub1=0; sub1<x.nlinhas; sub1++) { for (sub2=0; sub2<x.ncolunas; sub2++){   // Soma e guarda os resultados no array de x
            x.matriz[sub2][sub1] = y.matriz[sub2][sub1] - x.matriz[sub2][sub1];
        }
        }
        
        
        // 3a Etapa - Salvar resultados e alocar memória:
        
        drop();
        
        // Salva X:
        X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
        
        fprintf(X, "%d,(%d,%d)\n", x.verif, x.ncolunas, x.nlinhas);   // Imprime valores para N de inicialização e dimensões da matriz
        
        for (sub1=0; sub1<x.nlinhas; sub1++){ for (sub2=0; sub2<x.ncolunas-1; sub2++){  // Imprime os valores de X
            fprintf(X, "%f " , x.matriz[sub2][sub1]);
        }   fprintf(X, "%f\n", x.matriz[sub2][sub1]);
        }
        
        fclose(X);
        
    }
    
    // Mensagens de ERRO!:
    else if ( x.verif==0 || y.verif==0                        ) { Box(0, 40, "ERRO! - Matriz em X ou em Y incompleta!\n"     ); }
    else if ( x.ncolunas!=y.nlinhas  || y.ncolunas!=y.nlinhas ) { Box(0, 40, "ERRO! - Matriz em X ou em Y não é quadrada!\n" ); }
    else if ( x.ncolunas!=y.ncolunas || x.nlinhas!=y.nlinhas  ) { Box(0, 40, "ERRO! - Matrizes de dimensões diferentes!\n"   ); }
    
}
void    mtim     (void) {
    
    FILE *X, *Y;
    struct matrix x,y,r;
    int mt1, mt2, mt3, mt4;
    
    
    // 1a Etapa - Receber dados das matrizes:
    
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    Y = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/y.txt", "r");
    
    fscanf(X, "%d,(%d,%d)", &x.verif, &x.ncolunas, &x.nlinhas); fscanf(Y, "%d,(%d,%d)", &y.verif, &y.ncolunas, &y.nlinhas);
    
    if (x.verif==1 && y.verif==1 && ( x.ncolunas==y.nlinhas && x.nlinhas==y.ncolunas ) ) {
        if (x.nlinhas>x.ncolunas){
            
            for (mt1=0; mt1<x.nlinhas; mt1++) { for (mt2=0; mt2<x.nlinhas-1; mt2++){
                if (mt2<x.ncolunas && mt1<x.nlinhas) { fscanf(X, "%f " , &x.matriz[mt2][mt1]); }
                if (mt2<y.ncolunas && mt1<y.nlinhas) { fscanf(Y, "%f " , &y.matriz[mt2][mt1]); }
            }
                if (mt2<x.ncolunas && mt1<x.nlinhas) { fscanf(X, "%f\n", &x.matriz[mt2][mt1]); }
                if (mt2<y.ncolunas && mt1<y.nlinhas) { fscanf(Y, "%f\n", &y.matriz[mt2][mt1]); }
            }
            
        } else {
           
            for (mt1=0; mt1<x.ncolunas; mt1++) { for (mt2=0; mt2<x.ncolunas-1; mt2++){
                if (mt1<x.ncolunas && mt1<x.nlinhas) { fscanf(X, "%f " , &x.matriz[mt2][mt1]); }
                if (mt2<y.ncolunas && mt1<y.nlinhas) { fscanf(Y, "%f " , &y.matriz[mt2][mt1]); }
            }
                if (mt2<x.ncolunas && mt1<x.nlinhas) { fscanf(X, "%f\n", &x.matriz[mt2][mt1]); }
                if (mt2<y.ncolunas && mt1<y.nlinhas) { fscanf(Y, "%f\n", &y.matriz[mt2][mt1]); }
            }
        }
    }
    
    fclose(X); fclose(Y);
    
    if (x.verif==1 && y.verif==1 && ( x.ncolunas==y.nlinhas && x.nlinhas==y.ncolunas ) ){
        
        
        // 2a Etapa - Multiplicar:
        
        
            for (mt1=0; mt1<y.nlinhas; mt1++) {
                
                for (mt2=0; mt2<x.ncolunas; mt2++){
                    
                    for (mt3=0, mt4=0; mt3<y.ncolunas; mt3++){
                        mt4 = mt4 + y.matriz[mt3][mt1] * x.matriz[mt2][mt3];
                    }
                    r.matriz[mt2][mt1] = mt4;
                }
            }
        
        
        // 3a Etapa - Salvar resultado em X e alocar matrizes:
        
        drop();
        
        X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
        
        fprintf(X, "%d,(%d,%d)\n", y.verif, x.ncolunas, y.nlinhas);
        
        for (mt1=0; mt1<y.nlinhas; mt1++) { for (mt2=0; mt2<x.ncolunas-1; mt2++) {
            fprintf(X, "%f " , r.matriz[mt2][mt1]);
        }   fprintf(X, "%f\n", r.matriz[mt2][mt1]);
        }
        
        fclose(X);
        
    }
    else if ( (x.ncolunas!=y.nlinhas || x.nlinhas!=y.ncolunas) && (x.verif==0 || y.verif==0) )
        
    { Box(0, 40,
          "ERRO! - Matrizes possuem dimensões imcompariveis!\n"
          "ERRO! - Matrizes incompletas\n"); }
    
    else if ( x.verif==0 || y.verif==0 )                       { Box (0, 40, "ERRO! - Matrizes incompletas!\n"                    ); }
    else if ( x.ncolunas!=y.nlinhas || x.nlinhas!=y.ncolunas ) { Box (0, 40, "ERRO! - Matrizes possuem dimensões incompativeis!\n"); }
}
void    vtim  (float v) {
    
    int vt1,vt2;        // Contadores
    struct matrix x;    // Guarda valores da matriz X
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r+");
    
    fscanf(X, "%d,(%d,%d)\n", &x.verif, &x.ncolunas, &x.nlinhas);   // Recebe numero de verificação, colunas e linhas da matriz
    
    if (x.verif==1){    // Verifica se a matriz esta completa
        
        for (vt1=0; vt1<x.nlinhas; vt1++) { for (vt2=0; vt2<x.ncolunas-1; vt2++) {  // Recebe valores de X
            fscanf (X, "%f " , &x.matriz[vt2][vt1]);
        }   fscanf (X, "%f\n", &x.matriz[vt2][vt1]);
        }
        
        fseek(X, 8, SEEK_SET);  // Retorna ao começo dos valores de X
        
        for (vt1=0; vt1<x.nlinhas; vt1++) { for (vt2=0; vt2<x.ncolunas-1; vt2++) {  // Imprime os valores de X multiplicando-os pelo valor inserido
            fprintf (X, "%f " , v * x.matriz[vt2][vt1]);
        }   fprintf (X, "%f\n", v * x.matriz[vt2][vt1]);
        }
    }
    
    else { Box(0, 40, "ERRO! - Matriz incompleta!\n"); }  // Mensagem de ERRO!
    
    fclose(X);
}
void    mpow    (int v) {
    
    int pow1, pow2, pow3, pow4, pow5;   // Contadores
    struct matrix x1, x2, r;            // Matrizes
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(X, "%d,(%d,%d)\n", &x1.verif, &x1.ncolunas, &x1.nlinhas);    // Recebe dados de X
    
    if (x1.verif==1 && x1.nlinhas==x1.ncolunas) {   // Verifica se é possivel realizar operação
        
        for (pow1=0; pow1<x1.nlinhas; pow1++) { for (pow2=0; pow2<x1.ncolunas-1; pow2++) {  // Recebe valores da matriz
            fscanf(X, "%f " , &x1.matriz[pow2][pow1]); x2.matriz[pow2][pow1] = x1.matriz[pow2][pow1];
        }   fscanf(X, "%f\n", &x1.matriz[pow2][pow1]); x2.matriz[pow2][pow1] = x1.matriz[pow2][pow1];
        }
        
        fclose(X);  // Encerra coleta de dados
        
        for (pow1=0; pow1<v-1; pow1++){                                                 // Repete a operação quantas vezes foram requiridas pelo usuário
            for (pow2=0; pow2<x1.nlinhas; pow2++) {                                     // Conta cada linha de X
                for (pow3=0; pow3<x1.ncolunas; pow3++){                                 // Conta cada coluna de X
                    for (pow4=0, pow5=0; pow4<x1.ncolunas; pow4++){                     // Conta cada coluna de Y
                        pow5 = pow5 + x2.matriz[pow4][pow2] * x1.matriz[pow3][pow4];    // Realiza a multiplicação
                    }
                    r.matriz[pow3][pow2] = pow5;                                        // Salva resultado
                }
            }
            for (pow2=0; pow2<x1.nlinhas; pow2++) { for (pow3=0; pow3<x1.ncolunas; pow3++) {    // Imprime resultado no operador
                x2.matriz[pow3][pow2] = r.matriz[pow3][pow2];
            }
            }
        }
        
        // Salva resultado na memória:
        X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
        
        fprintf(X, "%d,(%d,%d)\n", x1.verif, x1.ncolunas, x1.nlinhas);                      // Imprime dados de N de inicialização e dimensões
        
        for (pow1=0; pow1<x1.nlinhas; pow1++) { for (pow2=0; pow2<x1.ncolunas-1; pow2++) {  // Imprime matriz resultado na memória
            fprintf(X, "%f " , r.matriz[pow2][pow1]);
        }   fprintf(X, "%f\n", r.matriz[pow2][pow1]);
        }
    
    }
    
    // Mensagens de ERRO!:
    else if (x1.verif==0)             { Box(0, 40, "ERRO! - Matriz incompleta\n"   ); }
    else if (x1.ncolunas!=x1.nlinhas) { Box(0, 40, "ERRO! - Matriz não quadrada!\n"); }
    else { Box(0, 40, "ERRO! - Desconheçido!\n"); }
    
    fclose(X);  // Encerra toda a operação.
}
