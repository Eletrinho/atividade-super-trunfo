#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mapa[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 3, 3, 3, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0}};

    // Navio diagonal 1
    mapa[1][0] = 3;
    mapa[2][1] = 3;
    mapa[3][2] = 3;

    // Navio diagonal 2
    mapa[7][8] = 3;
    mapa[8][7] = 3;
    mapa[9][6] = 3;

    // Habilidade cone
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}};

    // Habilidade cruz
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}};

    // Habilidade octaedro
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}};

    // Imprime o mapa antes do ataque
    printf("Mapa antes do ataque:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", mapa[i][j]);
        }
        printf("\n");
    }

    // Ataque cone
    int ataquex = 2;
    int ataquey = 2;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int tabuleiroLinha = ataquex - 5 / 2 + i;
            int tabuleiroColuna = ataquey - 5 / 2 + j;
            if (tabuleiroLinha >= 0 && tabuleiroLinha < 10 && tabuleiroColuna >= 0 && tabuleiroColuna < 10)
            {
                if (cone[i][j] == 1)
                {
                    mapa[tabuleiroLinha][tabuleiroColuna] = 5;
                }
            }
        }
    }

    // Ataque cruz
    ataquex = 7;
    ataquey = 4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int tabuleiroLinha = ataquex - 5 / 2 + i;
            int tabuleiroColuna = ataquey - 5 / 2 + j;
            if (tabuleiroLinha >= 0 && tabuleiroLinha < 10 && tabuleiroColuna >= 0 && tabuleiroColuna < 10)
            {
                if (cruz[i][j] == 1)
                {
                    mapa[tabuleiroLinha][tabuleiroColuna] = 5;
                }
            }
        }
    }
    
    printf("Mapa depois dos ataques:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", mapa[i][j]);
        }
        printf("\n");
    }
        return 0;
    }