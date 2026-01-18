#include <stdio.h>

int main(){

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //1. Criando o Tabuleiro (Matriz 10x10)
    int tabuleiro[10][10] = {0};

    //2. Criando navios
    int navioH[3] = {3, 3, 3};
    int navioV[3] = {3, 3, 3};

    //3. Coordenadas iniciais
    int linhaH = 2, colunaH = 3;
    int linhaV = 5, colunaV = 6;

    //4. Posicionando os navios horizontais
    for (int i = 0; i < 3; i++){
        tabuleiro[linhaH][colunaH + i] = navioH[i];
    } 

    //5. Posicionando os navios verticais
    for (int i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colunaV] = navioV[i];
    }

    //6. Exibindo o Tabuleiro
    printf("TABULEIRO BATALHA NAVAL \n");

    //cabeçalho das colunas
    printf(" ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]); //Imprime os números das colunas

    }
    printf("\n");

    //Linhas do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}