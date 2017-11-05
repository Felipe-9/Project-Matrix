//
//  timeline.c
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 30/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "timeline.h"

// Interface
/*
int     interface                         (int rs) {
    
#define H 10
#define L 66
    
    int r=1;                        //  Cond. de Saida
    FILE *txt;                      //  Guarda arquivo.txt
    int i,j=0;                      //  Contadores
    char linha[100], texto[2000];   //  Grava recupera arquivo.txt
    
    switch (rs) {
        case 1: {   // Pagina de Inicialisacao
            
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
            printf("\n                             Press Enter to initialize the program");
            getchar();
            
            pbreak(50);
            
        } break;
        case 2: {   // Menu principal
            
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
        case 3: {   // Menu de Edicao
            
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
        case 4: {   // Menu de Operacoes
            
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
*/

void    Box          (int h,int l, char menu[100]) {
    
    int b1=1,b2,b3=0; // Contadores
    char line[100]; // Guarda e imprime linhas do texto inserido
    FILE *box; // Guarda o texto inserido
    
    box = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/box/texto.txt", "w");
    
    fprintf(box, "%s", menu); // Imprime o texto inserino no arquivo texto.txt
    
    fclose(box);
    
    box = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/box/texto.txt", "r");
    
    rewind(box);
    
    while (b1<=3){
        switch (b1) {
            case 1: /* Imprime a parte superior da caixa */ {
                
                for(b2=0;b2<l;b2++){
                    printf("_");
                } printf("\n");
                
                printf("|");
                for (b2=2;b2<l;b2++){
                    printf(" ");
                }
                printf("|\n");
                
            } break;
            case 2: /* Imprime o texto dentro da caixa */ {
                b3=4;
                while(fgets(line, sizeof(line), box)){
                    line[strlen(line)-1]='\0';
                    b3++;
                    printf("|  ");
                    printf("%s",line);
                    for (b2=strlen(line);b2<l-6;b2++){
                        printf(" ");
                    } printf("  |\n");
                }
                for (b2=b3;b2<h;b2++){
                    printf("|  ");
                    for (b3=0;b3<l-6;b3++){
                        printf(" ");
                    } printf("  |\n");
                }
            } break;
            case 3: /* Imprime a parte inferior da caixa */ {
                
                printf("|");
                for (b2=2;b2<l;b2++){
                    printf(" ");
                }
                printf("|\n");
                
                printf("|");
                for(b2=2;b2<l;b2++){
                    printf("_");
                } printf("|\n\n");
                
            } break;
        }
        b1++;
    }
    
    
}
void    pbreak                             (int pb1) {
    while (pb1>0){
        printf("\n");
        pb1--;
    }
}

void    intro                               (void) {
    
    char linha[100], texto[2000];
    int i1, i2=0;
    
    FILE *txt = fopen ("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/intro/logo.txt", "r");
    
    while(fgets(linha, sizeof(linha), txt)){ //   Guarda cada linha do arquivo .txt em linha
        for (i1=0;i1<strlen(linha);i1++){       //  Guarda em sequencia cada linha em intro
            texto[i1+i2]=linha[i1];
        }
        texto[i1+i2]='\n';    //  Marca fim de cada linha de do arquivo .txt
        i2=i2+i1;
    }
    texto[i2]='\0';
    
    fclose(txt);
    
    pbreak(50);
    Box(0,103,texto);   //  Imprime a intro
}
int     command                             (void) {
    
    int c1, c2, c3;     // Contadores
    int i=0, j=0, v=0;  // Guarda commando
    char rs[10][30];    // Guarda input do usuário
    
    
    // Zera strings de rs:
    
    for (c1=0; c1<10; c1++){
        rs[c1][0]='\0';
    }
    
    
    // Recebe comando do usuário:
    
    while ( ((rs[0][0]<'a') || (rs[0][0]>'z')) && ((rs[0][0]<'A') || (rs[0][0]>'Z')) ) {
        
        printf("Project Matrix: $ ");
        fgets(rs[0], 30, stdin);
        
        for (c1=0; c1<strlen(rs[0]); c1++){ // Proíbe o usuário de digitar numeros que iniciem com 0 e que tenham mais de 4 digitos
            if ( ((rs[0][c1]=='0') && ( ((rs[0][c1-1]<'1') || (rs[0][c1-1]>'9')) && ((rs[0][c1-2]<'1') || (rs[0][c1-2]>'9')) ))  ||  ( ((rs[0][c1]>='1' && rs[0][c1]<='9') && (rs[0][c1-1]<'1' || rs[0][c1]>'9')) && (rs[0][c1+3]>='0' && rs[0][c1+3]<='9') )){
                rs[0][0]='\0';
                printf ("\nERRO - Numero inválido\n\n");
            }
        }
    }
    
    
    // Parte a funçao inserida pelo usuário por palavras em strings diferentes:
    
    for (c1=0, c2=1, c3=0;c1<strlen(rs[0])+1;c1++, c3++){
        if (rs[0][c1]==' ') { rs[c2][c3]='\0'; c2++; c3=0; c1++;}
        rs[c2][c3]=rs[0][c1];
    }
    rs[c2+1][0]='\0';
    rs[c2][strlen(rs[c2])-1]='\0';
    
    
    // Confere se o usuário digitou palavras/funções repetidas:
    
    for (c1=1, c3=0; rs[c1][0]!='\0'; c1++) {
        for (c2=1; rs[c2][0]!='\0'; c2++) {
            if ((strcmp(rs[c1],rs[c2])==0) && rs[c1][0]!='\0' && c1!=c2) { c3++; break; }
        }
    }
    
    if (c3!=0) { printf("\nERRO!\n"); }
    
    
    else {
        
        // Recebe numeros inseridos pelo usuário:
        
        for (c1=2; rs[c1][0]!='\0'; c1++) {
            if (strcmp(rs[c1],"-i")==0){
                i = chtoin(rs[c1+1]);
            }
            if (strcmp(rs[c1],"-j")==0){
                j = chtoin(rs[c1+1]);
            }
            if (strcmp(rs[c1],"-v")==0){
                v = chtoin(rs[c1+1]);
            }
        }
        
        
        // Execulta commando do usuário:
        
        if      (strcmp(rs[1], "help"  )==0) { help          (); }  // Mostra tela de ajuda
        else if (strcmp(rs[1], "info"  )==0) { info     (rs[2]); }  // Mostra ajuda da função
        else if (strcmp(rs[1], "minfo" )==0) { minfo         (); }  // Mostra detalhes da matriz
        else if (strcmp(rs[1], "clear" )==0) { pbreak      (50); }  // Limpa a tela
        else if (strcmp(rs[1], "show"  )==0) { show         (1); }  // Mostra a matriz
        else if (strcmp(rs[1], "hide"  )==0) { show         (0); }  // Esconde a matriz
        else if (strcmp(rs[1], "quit"  )==0) { return         0; }  // Encerra programa
        else if (strcmp(rs[1], "intro" )==0) { intro         (); }  // Mostra tela intro
        else if (strcmp(rs[1], "E"     )==0) { enter         (); }  // Eleva coluna de matrizes
        else if (strcmp(rs[1], "D"     )==0) { drop          (); }  // Desce coluna de matrizes
        else if (strcmp(rs[1], "S"     )==0) { swap          (); }  // Troca matrizes de X e Y
        else if (strcmp(rs[1], "R"     )==0) { roll          (); }  // Aloca coluna de matrizes para baixo
        else if (strcmp(rs[1], "AC"    )==0) { Reset         (); }  // Reseta memória
        else if (strcmp(rs[1], "sum"   )==0) { sum           (); }  // Soma       (Y + X)
        else if (strcmp(rs[1], "sub"   )==0) { sub           (); }  // Subtrai    (Y - X)
        else if (strcmp(rs[1], "tim"   )==0) { tim           (); }  // Multiplica (Y * X)
        else if (strcmp(rs[1], "size"  )==0) { size      (i, j); }  // Edita dimensões da matriz
        else if (strcmp(rs[1], "choose")==0) { choose        (); }  // Insere valores na matriz
        else if (strcmp(rs[1], "point" )==0) { point  (i, j, v); }  // Insere valores nas cordenadas na matriz
        else if (strcmp(rs[1], "rand"  )==0) { mrand         (); }  // Preeche matriz com valores aleatórios
        else if (strcmp(rs[1], "ts"    )==0) { transp        (); }  // Transpõe matriz
        else if (strcmp(rs[1], "inv"   )==0) { inv           (); }  // Inverte matriz
        else if (strcmp(rs[1], "clr"   )==0) { clr           (); }  // Limpa matriz
    }
    return 1;
}
void    help                                (void) {
    
}
void    info                       (char func[10]) {
    
}
void    minfo                               (void) {
    
}
void    reset                               (void) {
    
}
void    show                               (int s) {
    
}
