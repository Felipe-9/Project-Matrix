//
//  edit.c
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 31/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "edit.h"
#include "interface.h"

void size (void){
  
    struct matrix x;                // Base para receber e alterar os valores para poder alterar a matriz localizada em X
    char dialog[1000];              // Menu de edição de dimensões de matriz
    char rs;                        // Recebe comando do usuário
    char c[4]=" - ",l[4]=" - ";     // Novos valores para as dimensões da matriz
    int r=1;                        // Cond de parada
    int i;                          // Contador
    
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/x.txt", "r");
    
    rewind(X);
    
    fscanf(X, "%d\n",&x.v); // Recebe o N de inicialização da matriz
    
    if (x.v>0){
        fscanf(X, "(%d,%d)",&x.i,&x.j); // Recebem os valores anteriores para as dimensões da matriz
        do {
            for (i=0;i<5;i++){  // Limpa todos os dados que não incluem numeros nas novas dimensões
                if (c[i]<'0'||c[i]>'9'){
                    c[i]='\0';
                }
                if (l[i]<'0'||l[i]>'9'){
                    l[i]='\0';
                }
            }
            sprintf(dialog,
                    "Alterar dimenções da matriz em X:  (%d,%d)  ->  (%s,%s)\n\n"
                    "i - N de linhas   j - N de colunas\n"
                    "c - Confirm       q - Cancel\n",x.i,x.j,c,l); // Prepara menu de alteração de dimensões
            
            pbreak(50);
            Box(0, 66, dialog); // Imprime menu
            printf("\n$ ");
            scanf("%c",&rs);
            
            switch (rs) {
                case 'i' : /* Alterar N de linhas   */ {
                    printf("$ ");
                    do{
                        fgets(c, 10, stdin);
                        if (c[0]=='0'){
                            c[0]='\n';
                        }
                    } while (c[0]=='\n'||(c[0]<'0'||c[0]>'9'));
                } break;
                case 'j' : /* Alterar N de colunas  */ {
                    printf("$ ");
                    do{
                        fgets(l, 10, stdin);
                        if (l[0]=='0'){
                            l[0]='\n';
                        }
                    } while (l[0]=='\n'||(l[0]<'0'||l[0]>'9'));
                }
                    ; break;
                case 'c': /* Inserir novos valores  */ {
                    if (c[0]!='\0'&&l[0]!='\0'){
                        r=0;
                    } else {
                        printf("\nDados insuficientes!\n");
                        i=0;
                        while(i<2){getchar(); i++;}
                    }
                }; break;
                case 'q': /* Cancelar novos valores */ r=0; break;
            }
            
        } while (r==1);
    } else {    // Mesmo que o anterior, porem sem valores anteriores para as dimensões
        do {
            for (i=0;i<5;i++){
                if (c[i]<'0'||c[i]>'9'){
                    c[i]='\0';
                }
                if (l[i]<'0'||l[i]>'9'){
                    l[i]='\0';
                }
            }
            sprintf(dialog,
                    "Alterar dimenções da matriz em X:  ( - , - )  ->  (%s,%s)\n\n"
                    "i - N de linhas   j - N de colunas\n"
                    "c - Confirm       q - Cancel\n",c,l);
            
            pbreak(50);
            Box(0, 66, dialog);
            printf("\n$ ");
            scanf("%c",&rs);
            
            switch (rs) {
                case 'i' : {
                    printf("$ ");
                    do{
                        fgets(c, 10, stdin);
                        if (c[0]=='0'){
                            c[0]='\n';
                        }
                    } while (c[0]=='\n'||(c[0]<'0'||c[0]>'9'));
                } break;
                case 'j' : {
                    printf("$ ");
                    do{
                        fgets(l, 10, stdin);
                        if (l[0]=='0'){
                            l[0]='\n';
                        }
                    } while (l[0]=='\n'||(l[0]<'0'||l[0]>'9'));
                }
                    ; break;
                case 'c': {
                    if (c[0]!='\0'&&l[0]!='\0'){
                        r=0;
                    } else {
                        printf("\nDados insuficientes!\n");
                        i=0;
                        while(i<2){getchar(); i++;}
                    }
                } break;
                case 'q': r=0; break;
            }
            
        } while (r==1);
    }
    
    if (rs=='c'){
        
    } else {
        
    }
    
    
}
void choose (void){
    
}
void point (void){
}
void inv (void){
    
}
void transp (void){
    
}
void mrand (void){
    
}
