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

void    Box         (int h,int l, char menu[100]) {
    
    int b1,b2,b3;       // Contadores
    char line[100];     // Guarda e imprime linhas do texto inserido
    FILE *box;          // Guarda o texto inserido
    
    l=l+6;              // Reajuste do valor de l
    
    // Guarda texto inserido em um arquivo:
    
    box = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/box/texto.txt", "w");
    
    fprintf(box, "%s", menu); // Imprime o texto inserino no arquivo texto.txt
    
    fclose(box);
    
    
    // Imprime texto dentro de uma caixa:
    
    box = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/box/texto.txt", "r");
    
    rewind(box);
    
    // Imprime parte superior da Caixa:
    
    for(b1=0;b1<l;b1++){
        printf("-");
    } printf("\n");
    
    // Imprime parte central com o texto:
    
    for(b1=4; fgets(line, sizeof(line), box); b1++){
        line[strlen(line)-1]='\0';
        printf("|  ");
        printf("%s",line);
        
        for (b2=strlen(line);b2<l-6;b2++){
            printf(" ");
        } printf("  |\n");
    }
    
    for (b2=b1;b2<h;b2++){
        printf("|  ");
        for (b3=0;b3<l-6;b3++){
            printf(" ");
        } printf("  |\n");
    }
    
    // Imprime base da caixa:
    
    for(b2=2;b2<l+2;b2++){
        printf("-");
    } printf("\n\n");
    
}
void    pbreak                          (int pb1) {
    while (pb1>0){
        printf("\n");
        pb1--;
    }
}
void    interface               (char path[1000]) {
    
    char linha[100], texto[2000];
    int i1, i2=0;
    int l=0;
    
    FILE *txt = fopen (path, "r");
    
    while(fgets(linha, sizeof(linha), txt)){        // Guarda cada linha do arquivo .txt em linha
        if (l<strlen(linha)) { l = strlen(linha); } // Guarda tamanho da maior linha
        for (i1=0;i1<strlen(linha);i1++){           // Guarda em sequencia cada linha em intro
            texto[i1+i2]=linha[i1];
        }
        texto[i1+i2]='\n';    //  Marca fim de cada linha de do arquivo .txt
        i2=i2+i1;
    }
    texto[i2]='\0';
    
    fclose(txt);
    
    if (l<40) { l=40; } // Proteção contra caixas menores que texto
    Box(0, l, texto);   // Imprime arquivo .txt dentro de uma caixa
    
} // REVER
int     command                            (void) {
    
    int c1, c2, c3;         // Contadores
    float i=0, j=0, v=0;    // Guarda commando
    char rs[10][50];        // Guarda input do usuário
    
    
    // Zera strings de rs:
    
    for (c1=0; c1<10; c1++){
        rs[c1][0]='\0';
    }
    
    
    // Mostra menu ou matriz:
    
    sh_help();
    sh_matriz();
    
    
    // Recebe comando do usuário:
    
    while ( ((rs[0][0]<'a') || (rs[0][0]>'z')) && ((rs[0][0]<'A') || (rs[0][0]>'Z')) ) {
        
        printf("Project Matrix: $ ");
        fgets(rs[0], 30, stdin);
        
    }
    
    
    // Parte a funçao inserida pelo usuário por palavras em strings diferentes:
    
    for (c1=0, c2=1, c3=0;c1<strlen(rs[0])+1;c1++, c3++){
        if (rs[0][c1]==' ') { rs[c2][c3]='\0'; c2++; c3=0; c1++; }
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
    if (c3!=0) { Box(0, 40, "ERRO! - Funções repetidas!\n"); }
    
    
    else {
        
        // Recebe numeros inseridos pelo usuário:
        
        for (c1=2; rs[c1][0]!='\0'; c1++) {
            if (strcmp(rs[c1],"-i")==0 || strcmp(rs[c1],"-m")==0){ i = atof(rs[c1+1]); }
            if (strcmp(rs[c1],"-j")==0 || strcmp(rs[c1],"-M")==0){ j = atof(rs[c1+1]); }
            if (strcmp(rs[c1],"-v")==0){ v = atof(rs[c1+1]); }
        }
        
        
        // Execulta commando do usuário:
        
        if      (strcmp(rs[1], "help"  )==0) { interface("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/help/help.txt");     }   // Mostra tela de ajuda
        
        else if (strcmp(rs[1], "info"  )==0) { info        (rs[2]); }   // Mostra ajuda da função
        else if (strcmp(rs[1], "minfo" )==0) { minfo            (); }   // Mostra detalhes da matriz
        else if (strcmp(rs[1], "clear" )==0) { pbreak         (50); }   // Limpa a tela
        else if (strcmp(rs[1], "show"  )==0) { showhide (1, rs[2]); }   // Mostra a matriz
        else if (strcmp(rs[1], "hide"  )==0) { showhide (0, rs[2]); }   // Esconde a matriz
        else if (strcmp(rs[1], "quit"  )==0) { return            0; }   // Encerra programa
        
        else if (strcmp(rs[1], "intro" )==0) { interface("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/intro/logo.txt");    }   // Mostra tela intro
        
        else if (strcmp(rs[1], "E"     )==0) { enter            (); }   // Eleva coluna de matrizes
        else if (strcmp(rs[1], "D"     )==0) { drop             (); }   // Desce coluna de matrizes
        else if (strcmp(rs[1], "S"     )==0) { swap             (); }   // Troca matrizes de X e Y
        else if (strcmp(rs[1], "R"     )==0) { roll             (); }   // Aloca coluna de matrizes para baixo
        else if (strcmp(rs[1], "AC"    )==0) { reset            (); }   // Reseta memória
        
        else if (strcmp(rs[1], "sum"   )==0) { sum              (); }   // Soma       (Y + X)
        else if (strcmp(rs[1], "sub"   )==0) { sub              (); }   // Subtrai    (Y - X)
        
        else if (strcmp(rs[1], "tim"   )==0 && strcmp(rs[2], "-v")!=0) { mtim  (); }   // Multiplica matrizes (Y * X)
        else if (strcmp(rs[1], "tim"   )==0 && strcmp(rs[2], "-v")==0) { vtim (v); }   // Multiplica escalar  (N * X)
        else if (strcmp(rs[1], "pow"   )==0 && strcmp(rs[2], "-v")==0) { mpow (v); }   // Eleva X ^ V
        
        else if (strcmp(rs[1], "size"  )==0) { size         (i, j); }   // Edita dimensões da matriz
        else if (strcmp(rs[1], "choose")==0) { choose           (); }   // Insere valores na matriz
        else if (strcmp(rs[1], "point" )==0) { point     (i, j, v); }   // Insere valores nas cordenadas na matriz
        else if (strcmp(rs[1], "rand"  )==0) { mrand            (); }   // Preeche matriz com valores aleatórios
        else if (strcmp(rs[1], "ts"    )==0) { transp           (); }   // Transpõe matriz
        else if (strcmp(rs[1], "inv"   )==0) { inv              (); }   // Inverte matriz
        
        else if (strcmp(rs[1], "clr"   )==0 && strcmp(rs[2], "-r")!=0) { clrv  (); }   // Limpa valores da matriz
        else if (strcmp(rs[1], "clr"   )==0 && strcmp(rs[2], "-r")==0) { clrt  (); }   // Reseta matriz
        
        else if (strcmp(rs[1], "Flowey")==0) { flowey      (rs[2]); }   // Secret
    }
    return 1;
}
void    info                      (char func[10]) {
    
    int in1;                // Contador
    char term[5] = " txt";  // Finaliza path
    char path[1000]=("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/help/info/");    // Base para procurar arquivo .txt
    
    term[4]='\0';   // Finaliza char da terminação
    
    
    // Prepara o caminho para achar arquivo:
    
    for (in1=0;in1<strlen(func)+4;in1++){   // Copia função inserida no final de path
        path[in1+strlen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/help/info/")]=func[in1];
        if (in1>strlen(func)){  // Finaliza função com a terminação .txt
            path[in1+strlen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/help/info/")]=term[in1-strlen(func)];
        }
    }
    path[in1+strlen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/help/info/")-4]='.';  // Corrige '.' não inserido
    
    
    // Recupera e imprime arquivo:
    
    interface(path);
    
}
void    minfo                              (void) {
    
    struct matrix x;
    char stats[1000];
    int mi[3];
    float det[4]; char form[10], type[100];
    
    
    // Recupera dados da matriz:
    
    // Abre arquivo de memoria X
    FILE *X = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/x.txt", "r");
    
    fscanf(X, "%d,(%d,%d)\n", &x.verif, &x.ncolunas, &x.nlinhas);  // Recupera numero de inicialização e dimensões da matriz
    
    for (mi[0]=0; mi[0]<x.nlinhas; mi[0]++){                              // Recumera valores da matriz
        for (mi[1]=0; mi[1]<x.ncolunas-1; mi[1]++){
            fscanf(X, "%f ", &x.matriz[mi[1]][mi[0]]);
        }
        fscanf(X , "%f\n", &x.matriz[mi[1]][mi[0]]);
    }
    
    fclose(X);
    
    
    // Prepara as estatisticas da matriz:
    
    switch (x.verif) {
        case 0: { sprintf(stats,
                          "Matriz sem dimenções definidas\n"
                          "Dimensões - (%d, %d)\n", x.ncolunas, x.nlinhas); } break;
        case 1: {
            
            // Tipo da matriz levando em conta a forma:
            
            if (x.nlinhas==x.ncolunas){
                sprintf(form, "Quadrada");
            } else if (x.ncolunas==1) {
                sprintf(form, ("Linear"));
            } else if (x.nlinhas==1) {
                sprintf(form, ("Coluna"));
            } else {
                sprintf(form, ("Comum"));
            }
            
            // Prepara output:
            
            sprintf(stats,
                    "Matriz guardada na memória X:\n"
                    "Dimensões - (%d, %d)\n"
                    "Formato   - %s\n"
                    "Matriz incompleta!\n", x.ncolunas, x.nlinhas, form);
        } break;
        case 2: {
            
            // Tipo da matriz levando em conta a forma:
            
            if (x.nlinhas==x.ncolunas){
                sprintf(form, "Quadrada");
            } else if (x.ncolunas==1) {
                sprintf(form, ("Linear"));
            } else if (x.nlinhas==1) {
                sprintf(form, ("Coluna"));
            } else {
                sprintf(form, ("Comum"));
            }
            
            // Achar (se for quadrada e de ordem menor ou igual a 3) o determinante:
            
            if (x.nlinhas==x.ncolunas){
                switch (x.ncolunas) {
                    case 1: { det[0] = x.matriz[0][0]; } break;
                    case 2: { det[0] = (x.matriz[0][0]*x.matriz[1][1]) - (x.matriz[1][0]*x.matriz[0][1]); } break;
                    case 3: {
                        
                        // Diagonais positivas:
                        
                        for (mi[0]=0, det[1]=1; mi[0]<3; mi[0]++){      // 1a Diagonal positiva
                            det[1] = det[1]*x.matriz[mi[0]][mi[0]];
                        }
                        
                        for (mi[0]=0, det[2]=1; mi[0]<3; mi[0]++){      // 2a Diagonal positiva
                            for (mi[1]=0; mi[1]<3; mi[1]++){
                                if (mi[1]+1==mi[0]||mi[1]==mi[0]+2){
                                    det[2] = det[2]*x.matriz[mi[1]][mi[0]];
                                }
                            }
                        }
                        
                        for (mi[0]=0, det[3]=1; mi[0]<3; mi[0]++){      // 3a Diagonal positiva
                            for (mi[1]=0; mi[1]<3; mi[1]++){
                                if (mi[1]==mi[0]+1||mi[1]+2==mi[0]){
                                    det[3] = det[3]*x.matriz[mi[1]][mi[0]];
                                }
                            }
                        }
                        
                        for (mi[0]=1, det[0]=0; mi[0]<4; mi[0]++){                // Soma diagonais positivas
                            det[0] = det[0] + det[mi[0]];
                        }
                        
                        // Diagonais negativas:
                        
                        for (mi[0]=0, mi[1]=2, det[1]=1; mi[0]<3; mi[0]++, mi[1]--){    // 1a Diagonal negativa
                            det[1] = det[1] * x.matriz[mi[1]][mi[0]];
                        }
                        
                        for (mi[0]=0, det[2]=1; mi[0]<3; mi[0]++){                      // 2a Diagonal negativa
                            for (mi[1]=0; mi[1]<3; mi[1]++){
                                if ((mi[1]+mi[0])==1 || (mi[1]==2 && mi[0]==2) ) {
                                    det[2] = det[2]*x.matriz[mi[1]][mi[0]];
                                }
                            }
                        }
                        
                        for (mi[0]=0, det[3]=1; mi[0]<3; mi[0]++){                      // 3a Diagonal negativa
                            for (mi[1]=0; mi[1]<3; mi[1]++){
                                if (mi[1]+mi[0]==3 || (mi[1]==0 && mi[0]==0) ) {
                                    det[3] = det[3]*x.matriz[mi[1]][mi[0]];
                                }
                            }
                        }
                        
                        for (mi[0]=1; mi[0]<4; mi[0]++){                                // Subtrai diagonais negativas
                            det[0] = det[0] - det[mi[0]];
                        }
                    } break;
                }
            }
            
            // Determinar tipo de matriz:
            
            for (mi[0]=0, mi[2]=0; mi[0]<x.nlinhas; mi[0]++){
                for (mi[1]=0; mi[1]<x.ncolunas; mi[1]++){
                    if (x.matriz[mi[1]][mi[0]]!=0){
                        mi[2]++;
                    }
                }
            }
            if (mi[2]==0) { sprintf(type, "Matriz nula"); }
            else {
                for (mi[0]=0, mi[2]=0; mi[0]<x.nlinhas; mi[0]++){
                    for (mi[1]=0; mi[1]<x.ncolunas; mi[1]++){
                        if ( ((mi[1]>mi[0]) && (x.matriz[mi[1]][mi[0]]!=0)) || ((mi[1]<=mi[0]) && (x.matriz[mi[1]][mi[0]]==0)) ){
                            mi[2]++;
                        }
                    }
                }
                if (mi[2]==0) { sprintf(type, "Matriz triangular inferior"); }
                else {
                    for (mi[0]=0, mi[2]=0; mi[0]<x.nlinhas; mi[0]++){
                        for (mi[1]=0; mi[1]<x.ncolunas; mi[1]++){
                            if ( ((mi[1]<mi[0]) && (x.matriz[mi[1]][mi[0]]!=0)) || ((mi[1]<=mi[0]) && (x.matriz[mi[1]][mi[0]]==0)) ){
                                mi[2]++;
                            }
                        }
                    }
                    if (mi[2]==0) { sprintf(type, "Matriz triangular superior"); }
                    else {
                        for (mi[0]=0, mi[2]=0; mi[0]<x.nlinhas; mi[0]++){
                            for (mi[1]=0; mi[1]<x.ncolunas; mi[1]++){
                                if ( ((mi[1]!=mi[0]) && (x.matriz[mi[1]][mi[0]]!=0)) || ((mi[1]==mi[0]) && (x.matriz[mi[1]][mi[0]]!=1)) ){
                                    mi[2]++;
                                }
                            }
                        }
                        if (mi[2]==0) { sprintf(type, "Matriz identidade e diagonal"); }
                        else {
                            for (mi[0]=0, mi[2]=0; mi[0]<x.nlinhas; mi[0]++){
                                for (mi[1]=0; mi[1]<x.ncolunas; mi[1]++){
                                    if ( ((mi[1]!=mi[0]) && (x.matriz[mi[1]][mi[0]]!=0)) || ((mi[1]==mi[0]) && (x.matriz[mi[1]][mi[0]]==0)) ){
                                        mi[2]++;
                                    }
                                }
                            }
                            if (mi[2]==0) { sprintf(type, "Matriz diagonal"); }
                            else { sprintf(type, "Comum"); }
                        }
                    }
                }
            }
        }
            if (strcmp(form, "Quadrada")==0 && x.ncolunas<4){
                sprintf(stats,
                        "Matriz guardada na memória X:\n"
                        "Dimensões    - (%d, %d)\n"
                        "Formato      - %s\n"
                        "Tipo         - %s\n"
                        "Determinante - %f\n", x.ncolunas, x.nlinhas, form, type, det[0]);
            } else {
                sprintf(stats,
                        "Matriz guardada na memória X:\n"
                        "Dimensões    - (%d, %d)\n"
                        "Formato      - %s\n"
                        "Tipo         - %s\n", x.ncolunas, x.nlinhas, form, type);
            }
    }
    Box(0, 43, stats);
    
}
void    showhide           (int s, char func[10]) {
    
    int sh1;            // Contador
    char line [50];     // Guarda varre cada linha do arquivo
    
    FILE *SH = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/help/switch.txt", "r+");
    
    // Liga ou desliga função
    switch (s) {
        case 0: {   // Desligar
            
            rewind(SH);
            while (fgets(line, sizeof(line), SH)){  // Acha qual função desligar na memoria
                for (sh1=0; sh1<strlen(func); sh1++){
                    if (line[sh1]!=func[sh1]) { break; }
                }
                if (sh1==strlen(func)){ // Desliga tal função
                    fseek(SH, -2, SEEK_CUR);
                    fputs("0", SH);
                    break;
                }
            }
        } break;
        case 1: {   // Ligar
            
            rewind(SH);
            while (fgets(line, sizeof(line), SH)){  // Acha qual função desligar na memoria
                for (sh1=0; sh1<strlen(func); sh1++){
                    if (line[sh1]!=func[sh1]) { break; }
                }
                if (sh1==strlen(func)){ // Desliga tal função
                    fseek(SH, -2, SEEK_CUR);
                    fputs("1", SH);
                    break;
                }
            }
        } break;
    }
    fclose(SH);
}
void    sh_matriz                          (void) {
    
    FILE *MATRIX, *X;                   // Verificação se deve mostrar e guarda a matriz
    int msh1=0, msh2;                   // Contadores
    char line[50], func[10]="matrix";   // Guarda linhas e palavras para comparação
    struct matrix x;                    // Guarda de forma organizada os valores da matriz
    
    
    // Verifica se deve imprimir a matriz:
    
    MATRIX = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/help/switch.txt", "r");
    
    rewind(MATRIX);
    while (fgets(line, sizeof(line), MATRIX)){  // Acha os valores atribuidos a esta função na memória
        for (msh1=0; msh1<strlen(func); msh1++){
            if (line[msh1]!=func[msh1]) { break; }
        }
        if (msh1==strlen(func)){ // Recebe valor de ação da função
            fseek(MATRIX, -2, SEEK_CUR);
            fscanf(MATRIX, "%d", &msh1);
            break;
        }
    }
    
    fclose(MATRIX);
    
    if (msh1==1){   // Se estiver ligada:
        
        // Recupera dados da matriz:
        
        X = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/memory/x.txt", "r");
        
        fscanf(X, "%d,(%d,%d)\n", &x.verif, &x.ncolunas, &x.nlinhas);
        
        for (msh1=0; msh1<x.nlinhas; msh1++){
            for (msh2=0; msh2<x.ncolunas-1; msh2++){
                fscanf(X, "%f ", &x.matriz[msh2][msh1]);
            }
            fscanf(X, "%f\n", &x.matriz[msh2][msh1]);
        }
        
        fclose(X);
        
        if (x.verif>0){
            
            // Mostra visualmente a matriz:
            
            // Imprime cabeça da matriz:
            printf("---");
            for (msh1=0; msh1<x.ncolunas*11+1; msh1++){
                printf(" ");
            }
            printf("---\n");
            
            // Imprime linhas com valores:
            for (msh1=0; msh1<x.nlinhas; msh1++){
                printf("|   ");
                for (msh2=0; msh2<x.ncolunas-1; msh2++){
                    if (x.matriz[msh2][msh1]<1000){
                        printf("%3f ", x.matriz[msh2][msh1]);
                    } else { printf(" -  "); }
                }
                if (x.matriz[msh2][msh1]<1000){
                    printf("%3f   |\n", x.matriz[msh2][msh1]);
                } else { printf(" -    |\n"); }
            }
            
            // Imprime base da matriz:
            printf("---");
            for (msh1=0; msh1<x.ncolunas*11+1; msh1++){
                printf(" ");
            }
            printf("---\n");
        }
    }
    fclose(MATRIX);
} // REVER
void    sh_help                            (void) {
    
    FILE *HELP;
    int h1;
    char line[50], func[]="help";
    
    HELP = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/help/switch.txt", "r");
    
    rewind(HELP);
    while (fgets(line, sizeof(line), HELP)){  // Acha os valores atribuidos a esta função na memória
        for (h1=0; h1<strlen(func); h1++){
            if (line[h1]!=func[h1]) { break; }
        }
        if (h1==strlen(func)){ // Recebe valor de ação da função
            fseek(HELP, -2, SEEK_CUR);
            fscanf(HELP, "%d", &h1);
            break;
        }
    }
    
    if (h1==1){
        interface("/Users/felipepinto/Documents/Engenharia\ Eletrica/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/Product/.resources/help/help.txt");
    }
    fclose(HELP);
}
void    initialise                         (void) {
    
    // Por defealt deixa a matriz e o menu help escondidos:
    showhide(0, "help"); showhide(0, "matrix");
    
}
void    flowey                     (char acc[10]) {
    
    char line[100];
    FILE *FLOWEY;
    
    if (strcmp(acc, "")==0){
        
        FLOWEY = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/.flowey/flowey.txt", "r");
        
        while (fgets(line, sizeof(line), FLOWEY)){
            printf("%s", line);
        }
    
    } else if (strcmp(acc, "hello")==0){
        
        FLOWEY = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/.flowey/hello.txt", "r");
        
        while (fgets(line, sizeof(line), FLOWEY)){
            printf("%s", line);
        }
    } else if (strcmp(acc, "idiot")==0){
        
        FLOWEY = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/.flowey/idiot.txt", "r");
        
        while (fgets(line, sizeof(line), FLOWEY)){
            printf("%s", line);
        }
    } else if (strcmp(acc, ":p")==0){
        
        FLOWEY = fopen("/Users/felipepinto/Documents/Engenharia Eletrica/A&L Prog/FelipePint0.github.io/Project-Matrix/Project Matrix/Product/.resources/.flowey/;p.txt", "r");
        
        while (fgets(line, sizeof(line), FLOWEY)){
            printf("%s", line);
        }
        
    }
    fclose(FLOWEY);
}
