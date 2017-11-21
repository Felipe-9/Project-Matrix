//
//  edit.c
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 31/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "edit.h"

void    size           (int c, int l) {
    
    int s1, s2;         // Contadores
    struct matrix x;    // Corpo da matrix X
    
    
    // Recupera dados da matrix X:
    
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf (X, "%d,(%d,%d)\n", &x.verif, &x.ncolunas, &x.nlinhas);  // Recupera N de inicialização e dimensões da matriz
    
    if (c==0) { c = x.ncolunas; } if (l==0) { l = x.nlinhas; }      // Caso so queira alterar uma dimneção a segunda se iguala a original
    
    if (x.verif==1) {                                               // Recupera valores da matriz X
        for (s1=0; s1<x.nlinhas; s1++) { for (s2=0; s2<x.ncolunas-1; s2++) {
            fscanf(X, "%f " , &x.matriz[s2][s1]); }
            fscanf(X, "%f\n", &x.matriz[s2][s1]); }
    }
    fclose(X);  // Encerra recolhimento de dados
    
    
    // Impreção da matriz com as novas dimenções:
    
    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
    
    fprintf(X, "1,(%d,%d)\n", c, l);    // Imprime novas dimensões e inicializa a matriz
    
    for (s1=0; s1<l; s1++) { for (s2=0; s2<c-1; s2++) { // Imprime novos valores
        if (s1<x.nlinhas && s2<x.ncolunas) { fprintf(X, "%f " , x.matriz[s2][s1]); } else { fprintf(X, "%f " , 0.0); }
    }   if (s1<x.nlinhas && s2<x.ncolunas) { fprintf(X, "%f\n", x.matriz[s2][s1]); } else { fprintf(X, "%f\n", 0.0); }
    }
    
    fclose(X);  // Encerra operação
}
void    choose                 (void) {
    
    int ch1, ch2, ch3, ch4, ch5;        // Contadores
    int c, l;                           // Recebe resposta do usuário
    char rs[3][50];                     // Recebe resposta do usuário
    struct matrix x;                    // Corpo da matrix X
    
    
    // Recebe dados de X:
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(X, "%d,(%d,%d)\n", &x.verif, &x.ncolunas, &x.nlinhas);   // Coleta do N de inicialização em dimensões
    
    if (x.verif==1) {   // Verifica existencia da matriz
        
        for (ch1=0; ch1<x.nlinhas; ch1++) { for (ch2=0; ch2<x.ncolunas-1; ch2++) {  // Recebe valores originais da matriz
            fscanf(X, "%f " , &x.matriz[ch2][ch1]); }
            fscanf(X, "%f\n", &x.matriz[ch2][ch1]); }
        
        fclose(X);  // Encerra a coleta de dados.
        
        for (ch1=0; ch1<x.nlinhas; ch1++) { for (ch2=0; ch2<x.ncolunas; ch2++) {    // Varre toda a matriz
            
            sh_matriz();    // Imprime matriz caso o usuário deseje
            
            // Recebe comando do usuário:
            
            for (rs[0][0]='\0'; rs[0][0]=='\0'; ) {
                printf("choose (%d,%d) <-- $ ", ch2+1, ch1+1);
                fgets(rs[0], sizeof(rs), stdin);
            }
            
            // Parte a funçao inserida pelo usuário por palavras em strings diferentes:
            
            for (ch3=0, ch4=1, ch5=0; ch3<strlen(rs[0])+1; ch3++, ch5++) {
                if (rs[0][ch3]==' ') { rs[ch4][ch5]='\0'; ch4++; ch5=0; ch3++; }
                rs[ch4][ch5] = rs[0][ch3];
            }   rs[ch4+1][0] = '\0'; rs[ch4][strlen(rs[ch4])-1] = '\0';
            
            // Confere se o usuário digitou palavras/funções repetidas:
            
            for (ch3=1, ch4=0; rs[ch3][0]!='\0'; ch3++) { for (ch5=0; rs[ch5][0]!='\0'; ch5++) {
                if ((strcmp(rs[ch3], rs[ch5])==0) && rs[ch3][0]!='\0' && ch3!=ch5 && rs[ch3][0]<'0' && rs[ch3][0]>'9') { ch4++; break; }
            }
            }   if (ch4==0) {
                
                // Recebe numeros inseridos pelo usuário:
                
                for (ch3=0, c=-1, l=-1; rs[ch3][0]!='\0'; ch3++) {
                    if (strcmp(rs[ch3], "-i")==0) { c = atof(rs[ch3+1])-1; }
                    if (strcmp(rs[ch3], "-j")==0) { l = atof(rs[ch3+1])-1; }
                }
                
                // Realiza comando do usuário:
                
                if      (strcmp(rs[1], "mv"    )==0) { if (c>=0) { ch2 = c-1; } else { ch2--; } if (l>=0) { ch1 = l; } }    // Move ponteiro
                else if (strcmp(rs[1], "fw"    )==0) { NULL; }                                                              // Pula uma coordenada
                else if (strcmp(rs[1], "bw"    )==0) {                                                                      // Retorna uma coordenada
                    if (ch2==0) { ch1--; ch2 = x.ncolunas-2; }
                    else { ch2 = ch2-2; }
                }
                else if (strcmp(rs[1], "end"   )==0) { ch1 = x.nlinhas; break;    }                 // Encerra operação
                else if (strcmp(rs[1], "show"  )==0) { showhide(1, rs[2]); ch2--; }                 // Deixa a mostra a matriz
                else if (strcmp(rs[1], "hide"  )==0) { showhide(0, rs[2]); ch2--; }                 // Esconde a matriz
                else if (strcmp(rs[1], "clear" )==0) { pbreak (50); ch2--;        }                 // Limpa a tela
                else if ( (rs[1][0]>='0' && rs[1][0]<='9') || rs[1][0]=='-' || rs[1][0]=='+' ) {    // Insere valor
                    
                    x.matriz[ch2][ch1] = atof(rs[1]);
                    
                    // Recria matriz X com o novo valor:
                    X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
                    
                    fprintf(X, "1,(%d,%d)\n", x.ncolunas, x.nlinhas);   // Reinsere as dimensões
                    
                    for (ch3=0; ch3<x.nlinhas; ch3++) { for (ch4=0; ch4<x.ncolunas-1; ch4++) {  // Insere novos valores
                        fprintf(X, "%f " , x.matriz[ch4][ch3]); }
                        fprintf(X, "%f\n", x.matriz[ch4][ch3]); }
                    
                    fclose(X);  // Finaliza recriação de X
                }
                else { ch2--; } // Caso o usuário não tenha inserido nada
                
                // Mensagens de erro:
            } else { Box(0, 40, "ERRO! - Funções repetidas!\n"); ch1 = x.nlinhas; break; }
        }
        }
    } else { Box(0, 40, "ERRO! - Matrix sem dimensões definidas!\n"); }
    
    fclose(X);  // Finaliza função.
}
void    point   (int c, int l, int v) {
    
    /*
     for (ch3=0, ch4=0; fgets(line, sizeof(line), CH); ch3 = ch3+ch5) {
     if  (ch4<strlen(line)) { ch4 = strlen(line); }
     for (ch5=0; ch5<strlen(line); ch5++) { text[ch3+ch5] = line[ch5]; } text[ch3+ch5] = '\n';
     }   text[ch3] = '\0';
     
     Box(0, ch4, text);
     */
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
void    transp                 (void) {
    
    int tr1, tr2;       // Contadores
    struct matrix x;    // Corpo da matriz
    
    // Colhe dados da matriz:
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(X, "%d,(%d,%d)\n", &x.verif, &x.ncolunas, &x.nlinhas);   // Recebe N de inicialização e dimensões
    
    if (x.verif==1) {   // Opera apenas na existencia de uma matriz
        
        for (tr1=0; tr1<x.nlinhas; tr1++) { for (tr2=0; tr2<x.ncolunas-1; tr2++) {    // Recebe valores da matriz
            fscanf(X, "%f " , &x.matriz[tr2][tr1]); }
            fscanf(X, "%f\n", &x.matriz[tr2][tr1]); }
        
        fclose(X);  // Encerra colheita de dados
        
        // Recria a matriz de forma transposta:
        X = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/memory/x.txt", "w");
        
        fprintf(X, "1,(%d,%d)", x.nlinhas, x.ncolunas); // Insere trocado as dimensões da matriz
        
        for (tr1=0; tr1<x.ncolunas; tr1++) { for (tr2=0; tr2<x.nlinhas-1; tr2++) {    // Insere de forma transposta os valores da matriz
            fprintf(X, "%f " , x.matriz[tr1][tr2]); }
            fprintf(X, "%f\n", x.matriz[tr1][tr2]); }
        
    } else { Box(0, 40, "ERRO! - Matriz sem dimensões definidas!\n"); } // Mensagem de erro caso não exista matriz em X
    
    fclose(X);  // Finaliza operação.
}
void    inv                    (void) {
    
}
void    mrand                  (void) {
    
}
