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
    char c[4],l[4];     // Novos valores para as dimensões da matriz
    int C=0, L=0;                   // Guarda os inteiros das novas dimensões
    int r=1;                        // Cond de parada
    int i, j;                       // Contadores
    
    // 1a Etapa - Ler e escolher novas dimensões.
    
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/x.txt", "r");
    
    rewind(X);
    
    fscanf(X, "%d\n(%d,%d)\n", &x.v, &x.i, &x.j); // Recebe o N de inicialização da matriz
    
    fclose(X);
    
    if (x.v>0){
        do {
            sprintf(dialog,
                    "Alterar dimenções da matriz em X:  (%d,%d)  ->  (%d,%d)\n\n"
                    "i - N de linhas   j - N de colunas\n"
                    "c - Confirm       q - Cancel\n",x.i,x.j,C,L); // Prepara menu de alteração de dimensões
            
            pbreak(50);
            Box(0, 66, dialog); // Imprime menu
            printf("\n$ ");
            scanf("%c",&rs);
            
            switch (rs) {
                case 'i' : /* Alterar N de linhas   */ {
                    printf("$ ");
                    do{
                        fgets(c, 10, stdin);    // Recebe novo N de colunas
                        if (c[0]=='0'){
                            c[0]='\n';
                        }
                    } while (c[0]=='\n'||(c[0]<'0'||c[0]>'9')); // Restringe o usuário a digitar apenas inteiros
                    for (i=0;i<5;i++){  // Limpa qualquer character que não for um inteiro
                        if (c[i]<'0'||c[i]>'9'){
                            c[i]='\0';
                        }
                        if (i>2){   // Limpa N maiores que 3 digitos
                            c[i]='\0';
                        }
                    }
                    j=0;
                    C=0;
                    for (i=0;i<strlen(c);i++){  // Converte char em int
                        C = C + ((c[i]-'0')*pow(10, strlen(c)-j-1));
                        j++;
                    }
                } break;
                case 'j' : /* Alterar N de colunas  */ {
                    printf("$ ");
                    do{
                        fgets(l, 10, stdin);    // Recebe novo N de linhas
                        if (l[0]=='0'){
                            l[0]='\n';
                        }
                    } while (l[0]=='\n'||(l[0]<'0'||l[0]>'9')); // Restringe o usuário a digitar apenas inteiros
                    for (i=0;i<5;i++){  // Limpa qualquer character que não for um inteiro
                        if (l[i]<'0'||l[i]>'9'){
                            l[i]='\0';
                        }
                        if (i>2){   // Limpa N maiores que 3 digitos
                            l[i]='\0';
                        }
                    }
                    j=0;
                    L=0;
                    for (i=0;i<strlen(l);i++){  // Converte char em int
                        L = L + ((l[i]-'0')*pow(10, strlen(l)-j-1));
                        j++;
                    }
                }
                    ; break;
                case 'c': /* Inserir novos valores  */ {
                    if ( (C!=0) && (L!=0) ){
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
            sprintf(dialog,
                    "Alterar dimenções da matriz em X:  ( - , - )  ->  (%d,%d)\n\n"
                    "i - N de linhas   j - N de colunas\n"
                    "c - Confirm       q - Cancel\n",C,L);
            
            pbreak(50);
            Box(0, 66, dialog);
            printf("\n$ ");
            scanf("%c",&rs);
            
            switch (rs) {
                case 'i' : /* Alterar N de linhas   */ {
                    printf("$ ");
                    do{
                        fgets(c, 10, stdin);    // Recebe novo N de colunas
                        if (c[0]=='0'){
                            c[0]='\n';
                        }
                    } while (c[0]=='\n'||(c[0]<'0'||c[0]>'9')); // Restringe o usuário a digitar apenas inteiros
                    for (i=0;i<5;i++){  // Limpa qualquer character que não for um inteiro
                        if (c[i]<'0'||c[i]>'9'){
                            c[i]='\0';
                        }
                        if (i>2){   // Limpa N maiores que 3 digitos
                            c[i]='\0';
                        }
                    }
                    j=0;
                    C=0;
                    for (i=0;i<strlen(c);i++){  // Converte char em int
                        C = C + ((c[i]-'0')*pow(10, strlen(c)-j-1));
                        j++;
                    }
                } break;
                case 'j' : /* Alterar N de colunas  */ {
                    printf("$ ");
                    do{
                        fgets(l, 10, stdin);    // Recebe novo N de linhas
                        if (l[0]=='0'){
                            l[0]='\n';
                        }
                    } while (l[0]=='\n'||(l[0]<'0'||l[0]>'9')); // Restringe o usuário a digitar apenas inteiros
                    for (i=0;i<5;i++){  // Limpa qualquer character que não for um inteiro
                        if (l[i]<'0'||l[i]>'9'){
                            l[i]='\0';
                        }
                        if (i>2){   // Limpa N maiores que 3 digitos
                            l[i]='\0';
                        }
                    }
                    j=0;
                    L=0;
                    for (i=0;i<strlen(l);i++){  // Converte char em int
                        L = L + ((l[i]-'0')*pow(10, strlen(l)-j-1));
                        j++;
                    }
                }
                    ; break;
                case 'c': /* Inserir novos valores  */ {
                    if ( (C!=0) && (L!=0) ){
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
    }
    // 2a Etapa - Recebe novas dimensões e atribui á memória.
    
    if (rs=='c'){   // Verifica se usuário quer atribuir as novas dimensões a matriz
        
        X = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/x.txt", "w");
        
        rewind(X);
        
        switch (x.v) {  // Verificação das novas dimensões para com as antigas
            case 2: { if ( (C>x.i) || (L>x.j) ){ x.v = 1; } } break;    // Se as novas dimensões forem menores que as anteriores, matriz completa.
            case 0: { x.v = 1; } break;                                 // Se as novas dimensões forem maiores que as anteriores, matriz incompleta.
        }
        
        fprintf(X, "%d\n",x.v); // Escreve no arquivo de memoria X o N de ninicialização desta matriz.
        
        x.i = C;
        x.j = L;
        
        fprintf(X, "(%d,%d)\n", x.i, x.j);  // Escreve no arquivo de memória X as novas dimensões da matriz.
        
        fclose(X);
    }
}
void choose (void){
    
    int i, j, k;                // Contadores
    struct matrix x;            // Base de construção da matriz
    int r1=1, r2=1;             // Cond de parada
    char dialog[1000];          // Menu de edição de dimensões de matriz
    char rs, v[4], c[4], l[4];        // Recebe respostas do usuário
    
    // 1a Etapa - ler N de inicialização e dimensões da matriz:
    
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/x.txt","r");
    
    fscanf(X, "%d\n(%d,%d)\n", &x.v, &x.i, &x.j);   // Recebe N de inicialização, N de colunas e de linhas da matriz
    
    fclose(X);
    
    // 2a Etapa - Receber valores do usuário:
    
    if (x.v==0) {   // Matriz sem dimensões definidas retorna ERRO
        Box(0, strlen("ERRO - Matriz sem dimensões definidas!"), "\nERRO - Matriz sem dimensões definidas!\n");
        i=0;
        while(i<2){getchar(); i++;}
    } else {        // Matriz com dimensões definidas
        i=0;
        while (r2==1) {    // Finalização da ação da função

            struct choosev valor[i];                    // Inicializador de novos valores
            valor[i].v=0; valor[i].i=0; valor[i].j=0;   // Zera valores do novo valor a ser inserido na matriz
            
            while (r1==1) { // Finalização da colheita de valores e cordenadas
                sprintf(dialog,
                        "Inserir %do valor na matriz:\n\n"
                        "    %d      ->      (%d,%d)\n\n"
                        "i - Selecionar coluna\n"
                        "j - Selecionar linha\n"
                        "v - Selecionar valor\n\n"
                        "c - Confirmar   q - Voltar\n"
                        "C - Finalizar   Q - Cancelar\n", i, valor[i].v, valor[i].i, valor[i].j);
                
                pbreak(50);
                Box(0, strlen("C - Finalizar   Q - Cancelar"), dialog);
                printf("\n$ ");
                scanf("%c", &rs);
                
                switch (rs){
                    case 'i': {
                        printf("$ ");
                        do{
                            fgets(c, 10, stdin);    // Recebe novo N de colunas
                            if (c[0]=='0'){
                                c[0]='\n';
                            }
                        } while (c[0]=='\n'||(c[0]<'0'||c[0]>'9')); // Restringe o usuário a digitar apenas inteiros
                        for (j=0;j<5;j++){  // Limpa qualquer character que não for um inteiro
                            if (c[j]<'0'||c[j]>'9'){
                                c[j]='\0';
                            }
                            if (j>2){   // Limpa N maiores que 3 digitos
                                c[j]='\0';
                            }
                        }
                        k=0;
                        valor[i].i=0;
                        for (j=0;j<strlen(c);j++){  // Converte char em int
                            valor[i].i = valor[i].i + ((c[j]-'0')*pow(10, strlen(c)-k-1));
                            k++;
                        }
                    } break;
                    case 'j': {
                        printf("$ ");
                        do{
                            fgets(l, 10, stdin);    // Recebe novo N de colunas
                            if (l[0]=='0'){
                                l[0]='\n';
                            }
                        } while (l[0]=='\n'||(l[0]<'0'||l[0]>'9')); // Restringe o usuário a digitar apenas inteiros
                        for (j=0;j<5;j++){  // Limpa qualquer character que não for um inteiro
                            if (l[j]<'0'||l[j]>'9'){
                                l[j]='\0';
                            }
                            if (j>2){   // Limpa N maiores que 3 digitos
                                l[j]='\0';
                            }
                        }
                        k=0;
                        valor[i].j=0;
                        for (j=0;j<strlen(l);j++){  // Converte char em int
                            valor[i].j = valor[i].j + ((l[j]-'0')*pow(10, strlen(l)-k-1));
                            k++;
                        }
                    } break;
                    case 'v': {
                        printf("$ ");
                        do{
                            fgets(l, 10, stdin);    // Recebe novo N de colunas
                            if (v[0]=='0'){
                                v[0]='\n';
                            }
                        } while (v[0]=='\n'||(v[0]<'0'||v[0]>'9')); // Restringe o usuário a digitar apenas inteiros
                        for (j=0;j<5;j++){  // Limpa qualquer character que não for um inteiro
                            if (v[j]<'0'||v[j]>'9'){
                                v[j]='\0';
                            }
                            if (j>2){   // Limpa N maiores que 3 digitos
                                v[j]='\0';
                            }
                        }
                        k=0;
                        valor[i].v=0;
                        for (j=0;j<strlen(v);j++){  // Converte char em int
                            valor[i].v = valor[i].v + ((v[j]-'0')*pow(10, strlen(v)-k-1));
                            k++;
                        }
                    } break;
                    case 'c': { r1=0; } break;
                    case 'q': {} break;
                    case 'C': {} break;
                    case 'Q': {} break;
                }
            }
            r1=1;
        }
    }
}
void point (void){
}
void inv (void){
    
}
void transp (void){
    
}
void mrand (void){
    
}
