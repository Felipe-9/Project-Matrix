//
//  interface.c
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 30/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "interface.h"
#include <string.h>

int     interface                         (int rs) {
    
#define H 10
#define L 66
    
    int r=1;                        //  Cond. de Saida
    FILE *txt;                      //  Guarda arquivo.txt
    int i,j=0;                      //  Contadores
    char linha[100], texto[2000];   //  Grava recupera arquivo.txt
    
    switch (rs) {
        case 1: /* Pagina de Inicialisacao  */  {
            
            txt = fopen ("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/interface/intro/m1.txt", "r");
            
            while(fgets(linha, sizeof(linha), txt)){ //   Guarda cada linha do arquivo .txt em linha
                for (i=0;i<strlen(linha);i++){       //  Guarda em sequencia cada linha em intro
                    texto[i+j]=linha[i];
                }
                texto[i+j]='\n';    //  Marca fim de cada linha de do arquivo .txt
                j=j+i;
            }
            texto[j]='\0';
            
            fclose(txt);
            
                pbreak(50);
                Box(0,103,texto);   //  Imprime a intro
                
                //  Espera resposta do usuário
                printf("\n\t\t\t\t\t\t\tPress Enter to initialize the program");
                scanf("%c",&rs);
            
                pbreak(50);
            
        } break;
        case 2: /* Menu principal             */  {
            
            txt = fopen ("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/interface/menu/m2.txt", "r");
            
            while(fgets(linha, sizeof(linha), txt)){ //   Guarda cada linha do arquivo .txt em linha
                for (i=0;i<strlen(linha);i++){       //  Guarda em sequencia cada linha em intro
                    texto[i+j]=linha[i];
                }
                texto[i+j]='\n';    //  Marca fim de cada linha de do arquivo .txt
                j=j+i;
            }
            texto[j]='\0';
            fclose(txt);
            
            do{
                pbreak(50);
                Box (H,L,texto);
                
                printf("\n$ ");
                scanf("%c",&rs);
                
                switch (rs){ // Define qual ação realizar
                    case 'E': rs =  1; r=0; break;
                    case 'D': rs =  2; r=0; break;
                    case 'S': rs =  3; r=0; break;
                    case 'R': rs =  4; r=0; break;
                    case 'e': rs = interface(3); r=0; break;
                    case 'o': rs = interface(4); r=0; break;
                    case 'q': rs = 0; r=0; break;
                }
            } while (r!=0);
        } break;
        case 3: /* Menu de Edicao           */  {
            
            r=1;
            
            txt = fopen ("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/interface/menu/m3.txt", "r");
            
            while(fgets(linha, sizeof(linha), txt)){ //   Guarda cada linha do arquivo .txt em linha
                for (i=0;i<strlen(linha);i++){       //  Guarda em sequencia cada linha em intro
                    texto[i+j]=linha[i];
                }
                texto[i+j]='\n';    //  Marca fim de cada linha de do arquivo .txt
                j=j+i;
            }
            texto[j]='\0';
            fclose(txt);
            
            do{
                pbreak(50);
                Box (H,L,texto);
                
                printf("\n$ ");
                scanf("%c",&rs);
                
                switch (rs) { // Define qual ação realizar
                    case 's': rs =  5; r=0; break;
                    case 'c': rs =  6; r=0; break;
                    case 'p': rs =  7; r=0; break;
                    case 'r': rs =  8; r=0; break;
                    case 'i': rs =  9; r=0; break;
                    case 't': rs = 10; r=0; break;
                    case 'q': rs = interface(2); r=0; break;
                }
            } while (r!=0);
        } break;
        case 4: /* Menu de Operacoes        */  {
            
            txt = fopen ("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/interface/menu/m4.txt", "r");
            
            while(fgets(linha, sizeof(linha), txt)){ //   Guarda cada linha do arquivo .txt em linha
                for (i=0;i<strlen(linha);i++){       //  Guarda em sequencia cada linha em intro
                    texto[i+j]=linha[i];
                }
                texto[i+j]='\n';    //  Marca fim de cada linha de do arquivo .txt
                j=j+i;
            }
            texto[j]='\0';
            fclose(txt);
            
            r=1;
            do{
                pbreak(50);
                Box(H,L,texto);
                printf("\n$ ");
                scanf("%c",&rs);
                
                switch (rs) { // Define qual ação realizar
                    case 'S': rs = 11; r=0; break;
                    case 's': rs = 12; r=0; break;
                    case 'm': rs = 13; r=0; break;
                    case 'q': interface(2); r=0; break;
                }
            } while (r!=0);
        } break;
    }
    
    return rs;
    
}
void    Box          (int h,int l, char menu[100]) {
    
    int i=1,j,k=0; // Contadores
    char line[100]; // Guarda e imprime linhas do texto inserido
    FILE *box; // Guarda o texto inserido
    
    box = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/box/texto.txt", "w");
    
    fprintf(box, "%s", menu); // Imprime o texto inserino no arquivo texto.txt
    
    fclose(box);
    
    box = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/box/texto.txt", "r");
    
    rewind(box);
    
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
void    pbreak                             (int n) {
    while (n>0){
        printf("\n");
        n--;
    }
}




